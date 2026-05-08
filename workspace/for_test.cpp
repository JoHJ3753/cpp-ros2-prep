#include <iostream>
#include <string>

int main(){
	int temp = 0;
	
	for(int i=0;i<=5;i++){
		std::cout << "i++ : [" << i << "]" <<std::endl;
	}
	for(int j=0;j<=5;++j){
		temp = j;
		std::cout << "temp : [" << temp << "]" <<std::endl;
		std::cout << "temp++ : [" << temp++ << "]" <<std::endl;
		std::cout << "++temp : [" << ++temp << "]" <<std::endl;
	}
	
	return 0;
}