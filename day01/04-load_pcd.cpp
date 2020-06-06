//
// Created by ty on 20-5-25.
//

#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int
main(int argc, char **argv) {
    // 准备pcl::PointXYZ类型的点云
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
    
    // 将pcd中的数据加载到cloud中
    if (pcl::io::loadPCDFile<pcl::PointXYZ>("./data/bunny.pcd", *cloud) == -1) //* load the file
    {
        PCL_ERROR ("Couldn't read file bunny.pcd \n");
        return (-1);
    }
    std::cout << "Loaded "
              << cloud->width * cloud->height
              << " data points from test_pcd.pcd with the following fields: "
              << std::endl;
    unsigned long size = cloud->points.size();
    for (size_t i = 0; i < size; ++i)
        std::cout << "    " << cloud->points[i].x
                  << " " << cloud->points[i].y
                  << " " << cloud->points[i].z << std::endl;

    return (0);
}