// 여러 개의 배열 값 중 특정한 값만 골라서 출력하는 코드
#include <iostream>
#include <vector>

int main() {
    std::vector<double> distances = {1.2, 0.8, 2.5, 0.4, 1.0, 1.2, 0.8, 2.5, 0.4, 1.0};
	
	//int sel_index[3] = {3, 7, 9};
	std::vector<int> sel_index = {3, 7, 9};

    for (std::size_t i = 0; i < sel_index.size(); i++) {
			std::cout << "Sensor " << sel_index[i]
                  << " distance: " << distances[sel_index[i]-1]
                  << " m" << std::endl;
				  
    }

    return 0;
}
