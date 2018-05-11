#include <iostream>
//#include <cstring>
//#include <string>

using namespace std;

int main() {
	char str[] = "0123456789012345678901234567890123456789"; // 1byte 40개를 넣었고 // char 배열의 특징 => 맨 마지막에 자동으로 null 값을 넣음
	// null은 문자의 끝을 알려주는 값
	// '\0' <- 이거 역시 1byte
	// hello world\0dfaionoadfji093u0haodsfhi
	// hello world
	// hello worlddfaionoadfji093u0haodsfhi 
	// hello worlddfaionoadfji093u0haodsfhi 

	cout << sizeof(str) << endl;

	cout << str << endl;

	char str2[41];
	// 문자 복사
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