
add_executable(01-cloud_viewer 01-cloud_viewer.cpp)
target_link_libraries(01-cloud_viewer ${PCL_LIBRARIES})

add_executable(02-pcl_visualizer 02-pcl_visualizer.cpp)
target_link_libraries(02-pcl_visualizer ${PCL_LIBRARIES})

add_executable(03-pcl_transform 03-pcl_transform.cpp)
target_link_libraries(03-pcl_transform ${PCL_LIBRARIES})

add_executable(04-load_pcd 04-load_pcd.cpp)
target_link_libraries(04-load_pcd ${PCL_LIBRARIES})

add_executable(05-save_pcd 05-save_pcd.cpp)
target_link_libraries(05-save_pcd ${PCL_LIBRARIES})

add_executable(06-kd_tree 06-kd_tree.cpp)
target_link_libraries(06-kd_tree ${PCL_LIBRARIES})

add_executable(07-octree 07-octree.cpp)
target_link_libraries(07-octree ${PCL_LIBRARIES})