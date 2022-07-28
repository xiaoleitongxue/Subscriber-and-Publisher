#include "ros/ros.h"
#include "std_msgs/String.h"
class Sub_And_Pub{
    public:
    // constructor
    Sub_And_Pub(ros::NodeHandle nh);
    ~Sub_And_Pub();
    private:
    ros::NodeHandle nodeHandle_;
    ros::Subscriber subscriber_;
    ros::Publisher publisher_;
    void publish_msg();
    void callback(const std_msgs::String::ConstPtr& msg);
};