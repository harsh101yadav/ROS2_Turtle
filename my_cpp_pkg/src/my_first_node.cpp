#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc,argv);//Initialize ros2 communication
    auto node = std :: make_shared<rclcpp::Node>("cpp_test");
    rclcpp::shutdown();
    return 0;
}