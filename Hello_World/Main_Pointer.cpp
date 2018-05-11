#include <iostream>

using namespace std;

int main() {

	int x;
	//int y = 10;
	cout << &x;

	int * pX = &x;
	*pX = 10;
	cout << x << endl;
	getchar();

	return 0;
}