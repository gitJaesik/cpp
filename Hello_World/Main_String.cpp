#include <iostream>
//#include <cstring>
//#include <string>

using namespace std;

int main() {
	char str[] = "0123456789012345678901234567890123456789"; // 1byte 40���� �־��� // char �迭�� Ư¡ => �� �������� �ڵ����� null ���� ����
	// null�� ������ ���� �˷��ִ� ��
	// '\0' <- �̰� ���� 1byte
	// hello world\0dfaionoadfji093u0haodsfhi
	// hello world
	// hello worlddfaionoadfji093u0haodsfhi 
	// hello worlddfaionoadfji093u0haodsfhi 

	cout << sizeof(str) << endl;

	cout << str << endl;

	char str2[41];
	// ���� ����
	for (int i = 0; i < 41; i++) {
		if (i == 40) {
			str2[i] = '\0';
			break;
		}

		str2[i] = str[i];
	}

	cout << str2 << endl;

	char * pStr = &str[0];

	cout << pStr << endl;

	getchar();

	return 0;
}