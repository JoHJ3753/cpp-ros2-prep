#include "robot_status.hpp"

int main() {
    RobotStatus status("turtlebot3", 85, 0.7);

    status.print();

    return 0;
}