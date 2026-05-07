#include <iostream>
#include <string>

int main(){
	int ret = 1;
	//1. 로봇 이름을 저장하는 std::string 변수 만들기
	std::string robot_name = "warehouse_bot";
	//2. 로봇 ID를 저장하는 int 변수 만들기
	int robot_id = 101;
	//3. 최대 속도를 저장하는 double 변수 만들기
	double max_speed = 1.8;
	//4. 자율주행 가능 여부를 저장하는 bool 변수 만들기
	bool autonomous = true;
	//5. 로봇 등급을 저장하는 char 변수 만들기
	char robot_grade = 'A';
	
	//6. 모든 값을 보기 좋게 출력하기
	std::cout << std::boolalpha;
	
	std::cout << "===== Robot Profile =====" << std::endl;
	std::cout << "Name: " << robot_name << std::endl;
	std::cout << "ID: " << robot_id << std::endl;
	std::cout << "Max Speed: " << max_speed << " m/s" << std::endl;
	//7. bool 값은 true/false로 출력하기
	std::cout << "Autonomous: " << autonomous << std::endl;
	std::cout << "Grade: " << robot_grade << std::endl;
	
	return 0;
}