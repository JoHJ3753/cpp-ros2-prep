#include <iostream>

void print_robot_start_message(){
	std::cout << "Robot system starting..." << std::endl;
}

void print_sensor_check_message(){
	std::cout << "Checking sensor..." << std::endl;
}

void print_motor_ready_message(){
	std::cout << "Motor controller ready." << std::endl;
}

int main(){
	print_robot_start_message();
	print_sensor_check_message();
	print_motor_ready_message();
	
	return 0;
}