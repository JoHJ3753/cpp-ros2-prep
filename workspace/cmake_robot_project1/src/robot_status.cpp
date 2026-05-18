#include "robot_status.hpp"

#include <iostream>

RobotStatus::RobotStatus(const std::string& name, int battery, double speed)
    : name_(name),
      battery_(battery),
      speed_(speed)
{
}

void RobotStatus::print() const {
    std::cout << "===== Robot Status =====" << std::endl;
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Battery: " << battery_ << "%" << std::endl;
    std::cout << "Speed: " << speed_ << " m/s" << std::endl;
}