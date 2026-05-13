#include <iostream>
#include <string>

struct RobotStatus {
    std::string name;
    int battery;
    double speed;
    bool emergency_stop;
};

int main(){
	RobotStatus status;
	
	status.name = "turtlebot3";
	status.battery = 80;
	status.speed = 0.5;
	status.emergency_stop = false;
	
	std::cout << std::boolalpha;
	
	std::cout << "===== Robot Status =====" << std::endl;
	std::cout << "Name: " << status.name << std::endl;  
	std::cout << "Battery: " << status.battery << "%" << std::endl;
	std::cout << "Speed: " << status.speed << " m/s" << std::endl;
	std::cout << "Emergency stop: " << status.emergency_stop << std::endl;
	
	return 0;

}