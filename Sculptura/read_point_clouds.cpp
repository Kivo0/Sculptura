#include "read_point_clouds.h"
//#include "time.h"
//#include <iostream>

//using namespace std;
//using namespace cv;

ReadPointClouds::ReadPointClouds(QObject *parent): QThread(parent)
{
    stopped = true;
}

ReadPointClouds::~ReadPointClouds()
{
    mutex.lock();
    stopped = true;
    //filenames.clear();
    //delete filenames;
    condition.wakeOne();
    mutex.unlock();
    wait();
}

void ReadPointClouds::read(QStringList files)
{
    filenames = files;
    pointClouds.clear();

    if (!isRunning()) {
        if (isStopped()){
            stopped = false;
        }
        start(HighPriority);
    }
}

void ReadPointClouds::run()
{
    if (stopped) return;

    for(int i=0; i<filenames.size(); i++) {
        QString filename = filenames.at(i);
        PointCloudT::Ptr tmpCloud(new PointCloudT);

        //Check if it's whether a .ply or a .pcd file, and use the respective loading function
        if(filename.contains(".ply")){
            if (plyReader.read(filename.toStdString(), *tmpCloud) == -1)
            {
              PCL_ERROR ("Couldn't read ply file \n"); //TODO don't show filename on screen
            }
        }else if(filename.contains(".pcd")){
            if (pcl::io::loadPCDFile<pcl::PointXYZ>(filename.toStdString(), *tmpCloud) == -1)
            {
              PCL_ERROR ("Couldn't read pcd file \n"); //TODO don't show filename on screen
            }
        }

        //Remove undefined values in the pointcloud
        //std::vector<int> indices;
        //pcl::removeNaNFromPointCloud(*tmpCloud, *tmpCloud, indices); //TODO!!!!!!!

        pointClouds.push_back(tmpCloud);
    }

    emit pointCloudsReady(pointClouds);
    stopped = true;
}

bool ReadPointClouds::isStopped() const
{
    return this->stopped;
}
