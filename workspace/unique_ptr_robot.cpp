#include <iostream>
#include <string>
#include <memory>

class Robot {
	public:
		Robot(const std::string& name)
		: name_(name)
		{
			std::cout << "Robot Created : [" 
					  << name_ 
					  << "]" 
					  << std::endl;
		}
		
		~Robot(){
			std::cout << "Robot Destroy" 
					  << std::endl;
		}
		
		void say_hello() const {
			std::cout << name_ << std::endl;
		}
	private:
		std::string name_;
};

int main(){
	std::unique_ptr<Robot> robot = std::make_unique<Robot>("Test");
	
	robot->say_hello();
	
	return 0;
}