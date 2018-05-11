#include <iostream> // input, output stream
// include는 헤더파일을 추가하는 함수
using namespace std;
namespace sm {
	int x = 20;
}
namespace jaesikphee
{
	int x = 5;
	void cout(int a) {
		std::cout << "aa";
	}
}
//using namespace jaesikphee;
using namespace sm;
// std::cout을 std는 붙이는게 귀찮으니까 뺼래, 앞으로 cout이라는 게 없으면 std::cout을 찾아봐
int main() {
	//int x = 10; // 디폴트 생성자b
	// int x = 10; // 생성자 중 초기화 생성자
	int x = 10;
	std::cout << x;
	getchar();	// 입력을 받는 함수 // 테스트하기 좋아요
	// Key 입력을 받는 함수
	return 0;
}