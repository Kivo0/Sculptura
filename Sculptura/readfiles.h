#ifndef READFILES_H
#define READFILES_H

#include <QThread>

// PCL library
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/filters/passthrough.h>
#include <pcl/filters/statistical_outlier_removal.h>

///fileread_thread class: This class manages the loading of files into the workspace. It's been designed as a thread
///taking into account that loading a high number of files may take a significatively amount of time.


class readfiles : public QThread
{
    Q_OBJECT

public:

    readfiles(QStringList listOfFiles, dataclass *newDataBase);
    PointCloudT::Ptr m_cloud;
    std::vector<PointCloudT::Ptr>  m_pointcloud_data;

private:
    typedef pcl::PointXYZ PointType;
    typedef pcl::PointCloud<PointType> PointCloudT;

    data *Database;
    QStringList fileNames;

    //Object for loading a PLY file
    pcl::PLYReader plyReader;

protected:
    void run();
};

#endif // READFILES_H
