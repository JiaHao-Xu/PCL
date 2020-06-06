//
// Created by ty on 20-5-25.
//

#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

int
main(int argc, char **argv) {

    // 创建一个PointCloud点云容器，数据类型pcl::PointXYZ
    pcl::PointCloud<pcl::PointXYZ> cloud;

    // Fill in the cloud data
    cloud.width = 5;
    cloud.height = 1;
    cloud.is_dense = false;
    cloud.points.resize(cloud.width * cloud.height);

    int rrr = rand();
    std::cout << rrr << std::endl;
    std::cout << RAND_MAX << std::endl;
    std::cout << (RAND_MAX + 1.0f) << std::endl;
    std::cout << rrr / (RAND_MAX + 1.0f) << std::endl;
    std::cout << 1024.0f * rrr / (RAND_MAX + 1.0f) << std::endl;
    std::cout << 1024 * rand()  << std::endl;


    // 得到一个-1.0 -> 1.0 的值： (1024 * rand()) / (RAND_MAX + 1.0f)
    // 得到一个 0.0 -> 1024.0值: 1024.0f * (rand() / (RAND_MAX + 1.0f))


    // 随机生成5个点. (-1.0 -> 1.0)
    for (size_t i = 0; i < cloud.points.size(); ++i) {
        cloud.points[i].x = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].y = 1024 * rand() / (RAND_MAX + 1.0f);
        cloud.points[i].z = 1024 * rand() / (RAND_MAX + 1.0f);
    }

    // 保存方式一：
    pcl::io::savePCDFileASCII("test_pcd.pcd", cloud);

    // 保存方式二：
    pcl::io::savePCDFileBinaryCompressed("test_pcd_BinaryCompressed.pcd", cloud);

    // 保存方式三：
    pcl::io::savePCDFile("test_pcd2.pcd", cloud, true);

    std::cerr << "Saved " << cloud.points.size() << " data points to test_pcd.pcd." << std::endl;
    for (size_t i = 0; i < cloud.points.size(); ++i)
        std::cerr << "    " << cloud.points[i].x << " " << cloud.points[i].y << " " << cloud.points[i].z << std::endl;

    return (0);
}