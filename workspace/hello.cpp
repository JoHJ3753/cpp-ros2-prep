#include <iostream> // 표준 입출력 라이브러리입니다. 터미널에 텍스트를 출력하기 위해 가장 먼저 불러와야 하는 도구입니다.

// C++ 프로그램의 실행이 시작되는 메인 함수(Entry Point)입니다. 
// 로봇의 모든 동작은 바로 이 함수에서 시작된다고 이해하면 됩니다.
int main() {
    // std::cout: 데이터를 화면(Console)으로 보내라는 명령어입니다.
    // << : 삽입 연산자로, 오른쪽에 있는 데이터를 왼쪽의 출력 장치로 보낸다는 의미입니다.
    // "Hello C++ for ROS2 Humble!" : 화면에 실제로 출력될 문구입니다.
    // std::endl : 한 줄 출력을 마친 후 다음 줄로 넘어가고(End Line), 출력 내용을 즉각 반영하라는 뜻입니다.
    std::cout << "Hello C++ for ROS2 Humble!" << std::endl;

    // 프로그램이 문제 없이 성공적으로 완료되었음을 운영체제(Windows/Linux)에 보고하며 종료합니다.
    return 0;
}