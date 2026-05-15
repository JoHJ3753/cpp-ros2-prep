#ifndef ROBOT_STATUS_HPP
#define ROBOT_STATUS_HPP

#include <string>

class RobotStatus {
public:
    RobotStatus(const std::string& name, int battery, double speed);

    void print() const;

private:
    std::string name_;
    int battery_;
    double speed_;
};

#endif