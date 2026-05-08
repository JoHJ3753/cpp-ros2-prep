#include <iostream>
#include <string>

int main(){
	int battery = 100;
	bool obstacle_detected = false;
	
	for (int step=1;step<=10;step++){
		std::cout << "Step: " << step << std::endl;
		
		if (step == 5){
			obstacle_detected = true;
		}
		
		if ((obstacle_detected) || (battery < 20)){
			std::cout << "Robot stopped." << std::endl;
			
			if(obstacle_detected){
				std::cout << "Reason: Obstacle detected." <<std::endl;
			}
			
			if (battery < 20){
				std::cout << "Reason: Battery low." << std::endl;
			}
			break;
		}
		
		std::cout << "Robot moving forward." << std::endl;
		battery -= 10;
		
		std::cout << "Battery: " << battery << "%" << std::endl;
		std::cout << "----------------------" << std::endl;
		
	}
	//로봇이 최대 10단계 이동한다.
	//각 단계마다 배터리가 10씩 감소한다.
	//5단계에서 장애물이 감지된다.
	//장애물이 감지되거나 배터리가 20 미만이면 정지한다.
	return 0;
}