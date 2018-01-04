#ifndef READ_POINT_CLOUDS_H
#define READ_POINT_CLOUDS_H

#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <boost/make_shared.hpp>
#include <QThread>
#include <QMutex>
#include <QWaitCondition>
#include <vector>
#include <QString>

class ReadPointClouds : public QThread
{
    Q_OBJECT

    typedef pcl::PointXYZ PointType;
    typedef pcl::PointCloud<PointType> PointCloudT;

public:
    ReadPointClouds(QObject *parent = 0);
    ~ReadPointClouds();

    void read(QStringList files);

    bool isStopped() const;

signals:
    void pointCloudsReady(std::vector<PointCloudT::Ptr> pointClouds);

protected:
    void run();

private:
    QStringList filenames;
    std::vector<PointCloudT::Ptr> pointClouds;

    //Object for loading a PLY file
    pcl::PLYReader plyReader;

    bool stopped;
    QMutex mutex;
    QWaitCondition condition;
};

#endif // READ_POINT_CLOUDS_H
