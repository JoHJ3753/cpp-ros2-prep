#include <iostream>
#include <string>

int main(){
	// 변수 선언 : 배터리, 감지 여부
	int battery = 100;
	bool obstacle_detected = false;
	// 로봇이 최대 10단계 이동한다.
	for(int i=0;i<10;i++){
		std::cout << "Index : " << i << std::endl;
		battery -= 10;
		std::cout << "Battery Resid : [" << battery << "]" <<std::endl;
		if(i==4){
			obstacle_detected = true;
			std::cout << "Obstacle Detect : " << i << std::endl;
		}
		if((obstacle_detected)||(battery < 20)){
			if(obstacle_detected){
				std::cout << "Obstacle Detected!!" << std::endl;
			}
			if(battery < 20){
				std::cout << "Battery Low (< 20)" << std::endl;
			}
			std::cout << "Stop!!" << std::endl;
		}
	}
	// 각 단계마다 배터리가 10씩 감소한다.
	// 5단계에서 장애물이 감지된다.
	// 장애물이 감지되거나 배터리가 20 미만이면 정지한다.
	return 0;
}