#include <ros/ros.h>
#include "subscriber_and_publisher/sub_and_pub.hpp"
int main(int argc, char** argv){
    ros::init(argc, argv, "sub_and_pub");
    ros::NodeHandle n("~");
    Sub_And_Pub sub_And_Pub(n);
    ros::spin();
    return 0;
}