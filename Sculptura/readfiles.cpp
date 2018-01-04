#include "readfiles.h"
#include <vector>

readfiles::readfiles(QStringList listOfFiles)
{
    fileNames = listOfFiles;
}

void readfiles::run()
{
    //Check the list of selected files from the dialog
    for (int i =0;i<fileNames.count();i++)
    {
        PointCloudT::Ptr tmpCloud (new PointCloudT) ;
        QString thefile=fileNames.at(i);
        //Check if it's whether a .ply or a .pcd file, and use the respective loading function
        if(thefile.contains(".ply")){
            if (plyReader.read(thefile.toStdString(), *tmpCloud) == -1) //* load the file
            {
              PCL_ERROR ("Couldn't read ply file \n");
            }
        }else if(thefile.contains(".pcd")){
            if (pcl::io::loadPCDFile<pcl::PointXYZ> (thefile.toStdString(), *tmpCloud) == -1) //* load the file
            {
              PCL_ERROR ("Couldn't read pcd file \n");
            }
        }

        //Remove undefined values in the pointcloud
        std::vector<int> indices;
        pcl::removeNaNFromPointCloud(*tmpCloud,*tmpCloud, indices);

        //Append pointcloud into the vector of pointclouds
        m_pointcloud_data.push_back(tmpCloud);
        m_cloud=tmpCloud;
    }
    //Tell the main window class that the opening process has finished
    //Database->setFileReadingState(1);
}
