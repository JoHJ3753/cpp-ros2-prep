#ifndef ROBOT_MESSAGE_HPP
#define ROBOT_MESSAGE_HPP

#include <memory>
#include <string>

struct RobotStatusMessage {
    using SharedPtr = std::shared_ptr<RobotStatusMessage>;

    std::string robot_name;
    int battery;
    double speed;
    bool emergency_stop;
};

struct RobotCommandMessage {
    using SharedPtr = std::shared_ptr<RobotCommandMessage>;

    std::string command;
    double target_speed;
};

#endif