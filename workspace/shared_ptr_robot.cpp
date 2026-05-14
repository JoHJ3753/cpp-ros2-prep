#include <iostream>
#include <string>
#include <memory>

class Robot {
	public:
		Robot(const std::string& name)
		:name_(name)
		{
			std::cout << "Generate!!! : " << name_ << std::endl;
		}
		
		~Robot(){
			std::cout << "Robot Destroy!!!" << std::endl;
		}
		
		void say_hello() const{
			std::cout << "say hello() : " << name_ << std::endl;
		}
	private:
		std::string name_;
};

int main(){
	std::shared_ptr<Robot> robot = std::make_shared<Robot>("SharePtr");
	robot->say_hello();
	std::cout << "Robot Use Count : " << robot.use_count() <<std::endl;
	
	std::shared_ptr<Robot> robot1 = robot;
	std::cout << "Robot Use Count : " << robot.use_count() <<std::endl;
	std::cout << "Robot1 Use Count : " << robot.use_count() <<std::endl;
	
	//delete robot1;
	//std::cout << "Robot Use Count : " <robot.use_count() <<std::endl;
	//std::cout << "Robot1 Use Count : " <robot.use_count() <<std::endl;
	
	return 0;
}