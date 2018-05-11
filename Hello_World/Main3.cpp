#include <iostream>

using namespace std;

/* 
 1부터 N까지 더하는 함수
 N의 크기가 1,000,000보다 작음
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
