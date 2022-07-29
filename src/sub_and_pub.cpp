#include "subscriber_and_publisher/sub_and_pub.hpp"
#include <sstream>
Sub_And_Pub::Sub_And_Pub(ros::NodeHandle nodeHandle): nodeHandle_(nodeHandle){
    nodeHandle_ = nodeHandle;
    subscriber_ = nodeHandle_.subscribe("subscribeTopicName", 1, &Sub_And_Pub::callback, this);
    publisher_ = nodeHandle_.advertise<std_msgs::String>("publishTopicName", 1000);
}
Sub_And_Pub::~Sub_And_Pub(){
    
}
// publish msg
void Sub_And_Pub::publish_msg(){
    std_msgs::String msg;
    std::stringstream ss;
    ss << "hello world ";
    msg.data = ss.str();
    publisher_.publish(msg);
}
// subscriber callback function
void Sub_And_Pub::callback(const std_msgs::String::ConstPtr& msg){
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}