#include "mainwindow.h"

using namespace openni;
using namespace cv;

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
   std::cout<<"start"<<std::endl;
    preview = new CameraPreview();
    QObject::connect(preview, SIGNAL(frameReady(QImage)), this, SLOT(renderFrame(QImage)));
    QObject::connect(preview, SIGNAL(depthAndColorsReady(std::vector<cv::Mat>, std::vector<cv::Mat>)),
                     this, SLOT(saveDepthAndColorMat(std::vector<cv::Mat>, std::vector<cv::Mat>)));

    kinectPreview = new KinectPreview();
    QObject::connect(kinectPreview, SIGNAL(frameReady(QImage)), this, SLOT(renderFrame(QImage)));
    QObject::connect(kinectPreview, SIGNAL(depthAndColorsReady(std::vector<cv::Mat>, std::vector<cv::Mat>)),
                     this, SLOT(saveDepthAndColorMat(std::vector<cv::Mat>, std::vector<cv::Mat>)));

    pointCloudFiles = new QStringList();
    pointCloud.reset(new PointCloudT);

    initVisualiser();

    qRegisterMetaType<std::vector<PointCloudT::Ptr>>("std::vector<PointCloudT::Ptr>");
    readPointClouds = new ReadPointClouds();
    QObject::connect(readPointClouds, SIGNAL(pointCloudsReady(std::vector<PointCloudT::Ptr>)),
                     this, SLOT(savePointClouds(std::vector<PointCloudT::Ptr>)));
}

MainWindow::~MainWindow()
{
    pointCloudFiles->clear();
    delete pointCloudFiles;
    depth.clear();
    colors.clear();
    delete ui;
}

void MainWindow::on_advanced_scanning_clicked()
{
    advanced_parameters = new Advanced_scanning(this);
    advanced_parameters->show();
}

void MainWindow::on_start_preview_clicked()
{   
     std::cout<<"hel2lo"<<std::endl;


//    if (preview->isStopped()){
//        preview->startPreview(ui->preview_window->size());
//        ui->start_preview->setText(tr("Stop preview"));
//    } else {
//        preview->stopPreview();
//        ui->start_preview->setText(tr("Start preview"));
//    }

    if (kinectPreview->isStopped()){

         std::cout<<"if is stopped"<<std::endl;
        kinectPreview->startPreview(ui->preview_window->size());
        std::cout<<"afterstartpreview"<<std::endl;

        ui->start_preview->setText(tr("Stop preview"));
         std::cout<<"checkbuttonstoprpreview"<<std::endl;
    } else {

         //std::cout<<"beforestop preview in else part"<<std::endl;
        kinectPreview->stopPreview();
        ui->start_preview->setText(tr("Start preview"));
    }
}

void MainWindow::on_start_scanning_clicked()
{


   std::cout<<"hello"<<std::endl;



   //    if (preview->isRecording()){
//        preview->stopRecording();
//        ui->start_scanning->setText(tr("Start scanning"));
//    } else {
//        preview->startRecording();
//        ui->start_scanning->setText(tr("Stop scanning"));
//    }

    if (kinectPreview->isRecording()){
        kinectPreview->stopRecording();
        ui->start_scanning->setText(tr("Start scanning"));
    } else {
        kinectPreview->startRecording();
        ui->start_scanning->setText(tr("Stop scanning"));
    }
}

void MainWindow::renderFrame(QImage frame)
{
    if (!frame.isNull())
    {
        ui->preview_window->setAlignment(Qt::AlignCenter);
        //frame = frame.scaled(ui->preview_window->size(), Qt::KeepAspectRatio);
        ui->preview_window->setPixmap(QPixmap::fromImage(frame));
    }
}

void MainWindow::saveDepthAndColorMat(std::vector<cv::Mat> depth, std::vector<cv::Mat> colors)
{
    this->depth = depth;
    this->colors = colors;
}

void MainWindow::on_actionOpen_PointClouds_triggered()
{
    QStringList filenames = QFileDialog::getOpenFileNames(
                this,
                tr("Choose Point Clouds"),
                "C://",
                tr("Point Clouds(*.ply *.pcd)"));

    if( !filenames.isEmpty() )
    {
        //TODO remove duplicates first
        pointCloudFiles->append(filenames);
        readPointClouds->read(filenames); //TODO what if thread is already running?
    }
}

void MainWindow::on_deletePointCloud_clicked()
{
    QModelIndexList selection = ui->listPointClouds->selectionModel()->selectedIndexes();
    if (!selection.isEmpty()) {
        QModelIndex index = selection.at(0);
        pointCloudFiles->removeAt(index.row());
        pointCloudSet.erase(pointCloudSet.begin()+index.row());
        showPointCloudFiles();
        if (!pointCloudFiles->isEmpty()) {
            showSelectedPointCloud(0);
        }
        else {
            pointCloud.reset(new PointCloudT);
            visualiser->updatePointCloud(pointCloud, "cloud");
            ui->vtkWindow->update ();
        }

    } //TODO else show warning message
}

void MainWindow::showPointCloudFiles()
{
    QStandardItemModel* listModel = new QStandardItemModel();

    QStringList filenameParts;
    foreach (const QString &filename, *pointCloudFiles) {
        filenameParts = filename.split("/");
        QStandardItem* item = new QStandardItem(filenameParts.last());
        listModel->appendRow(item);
    }

    ui->listPointClouds->setModel(listModel);
}

void MainWindow::initVisualiser()
{
    // Set up the QvtkWindow widget
    visualiser.reset(new pcl::visualization::PCLVisualizer("visualiser", false));
    //Set the QvtkWindow to show the graphics rendered by "visualiser"
    ui->vtkWindow->SetRenderWindow(visualiser->getRenderWindow());
    //Set "visualiser" to receive the user interactions captured by the WvtkWindow widget
    visualiser->setupInteractor(ui->vtkWindow->GetInteractor(), ui->vtkWindow->GetRenderWindow());
    visualiser->addCoordinateSystem(0.3,-0.5,-0.5,-0.5);
    ui->vtkWindow->update();

    //Link the pointcloud container from the database to the visualization object:
    pcl::visualization::PointCloudColorHandlerCustom<PointType> colorPt(pointCloud, 0, 123, 100);
    visualiser->addPointCloud(pointCloud, colorPt, "cloud");
    visualiser->resetCamera();
    //Set visualization parameters such as size of points:
    visualiser->setPointCloudRenderingProperties(pcl::visualization::PCL_VISUALIZER_POINT_SIZE, 3, "cloud");
    ui->vtkWindow->update();
}

void MainWindow::savePointClouds(std::vector<PointCloudT::Ptr> pointClouds)
{
    pointCloudSet.insert(std::end(pointCloudSet), std::begin(pointClouds), std::end(pointClouds));
    pointCloud = pointCloudSet.at(0); //TODO if not empty
    showPointCloudFiles();

    visualiser->updatePointCloud(pointCloud, "cloud");
    //TODO should reset camera?
    ui->vtkWindow->update();
}

void MainWindow::showSelectedPointCloud(int indexPointcloud)
{
    pointCloud = pointCloudSet[indexPointcloud];
    visualiser->updatePointCloud(pointCloud, "cloud");
    //if( ui->checkBox->isChecked() ) viewer->resetCamera ();
    ui->vtkWindow->update ();
}


void MainWindow::on_listPointClouds_doubleClicked(const QModelIndex &index)
{
    showSelectedPointCloud(index.row());
}
