#include <iostream>

using namespace std;

/* 
 1���� N���� ���ϴ� �Լ�
 N�� ũ�Ⱑ 1,000,000���� ����
*/


inline int Plus(int n) {

	int sum = 0;
	for (int i = 0; i <= n; i++) {
		sum += i;
	}
	return sum;
}


int main () {

	int n = 10;
	Plus(n);

	return 0;
}
