#ifndef DATA_H
#define DATA_H


#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/registration/icp.h>
#include <pcl/registration/gicp.h>
#include <pcl/registration/elch.h>
#include <boost/make_shared.hpp>
#include <pcl/kdtree/kdtree_flann.h>
#include <pcl/surface/mls.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/filters/filter.h>
#include <pcl/registration/icp_nl.h>
#include <pcl/registration/transforms.h>
#include <pcl/filters/statistical_outlier_removal.h>
#include <vector>
#include <QString>



class data
{
private:

    typedef pcl::PointXYZ PointType;
    typedef pcl::PointCloud<PointType> PointCloudT;
    typedef pcl::PointXYZRGBA PointTypeColor;
    typedef pcl::PointCloud<PointTypeColor> PointCloudColorT;

public:

    data();
    ~data();

public:

    // Accessors and mutators:

        PointCloudT::Ptr m_cloud;
        boost::shared_ptr<pcl::PolygonMesh> m_Mesh;
        std::vector<PointCloudT::Ptr>  m_pointcloud_data;

};

#endif // DATA_H
