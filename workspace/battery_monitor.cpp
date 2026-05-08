#include <iostream>
#include <string>

int main(){
	//1. 배터리 변수 정의(정수)
	int battery = 100;
	//2. 반복(배터리 사용가능)
	while (battery > 0){
		std::cout << "Battery: [" << battery << "%]" << std::endl;
		if (battery >= 50){
			std::cout << "Status: Normal operation" << std::endl;
		} else if (battery >= 20){
			std::cout << "Status: Normal warning" << std::endl;
		} else {
			std::cout << "Status: Battery low. Stop and charge." << std::endl;
		}
		battery -= 15;
		std::cout << "-----------------------" << std::endl;
	}
	//3. 현재 배터리 잔량 표시
	//4. 상태 표시
	//	 배터리 >=50 : Status: Normal operation
	//	 배터리 >=20 : Status: Normal warning
	//	 배터리 < 20 : Status: Battery low. Stop and charge.
	//5. 배터리 15 차감
	//6. 마감 표시
	return 0;
}