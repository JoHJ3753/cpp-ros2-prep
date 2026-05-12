#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> sensor_names = {
        "front_lidar",
        "rear_lidar",
        "left_camera",
        "right_camera"
    };
	
	for (const std::string& name : sensor_names) {
		std::cout << "Sensor: " << name << std::endl;
	}
	
	return 0;
}