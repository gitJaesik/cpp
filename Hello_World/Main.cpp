#include <iostream> // input, output stream
// include�� ��������� �߰��ϴ� �Լ�
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
// std::cout�� std�� ���̴°� �������ϱ� �E��, ������ cout�̶�� �� ������ std::cout�� ã�ƺ�
int main() {
	//int x = 10; // ����Ʈ ������b
	// int x = 10; // ������ �� �ʱ�ȭ ������
	int x = 10;
	std::cout << x;
	getchar();	// �Է��� �޴� �Լ� // �׽�Ʈ�ϱ� ���ƿ�
	// Key �Է��� �޴� �Լ�
	return 0;
}