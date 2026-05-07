#include <iostream>
#include <string>

int main() {
	std::string robot_description;
	
	std::cout << "Enter robot description";
	std::getline(std::cin, robot_description);
	std::cout << "Robot Desc : " << robot_description << std::endl;
	return 0;
}