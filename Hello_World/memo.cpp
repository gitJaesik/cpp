#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


// 메모장을 만들꺼임
// 파일로 저장하기
// 메모장은 연락처를 저장하는 위주로 사용 (클래스 공부하려고)

int main() {

	// 파일 저장하는 법
	FILE * f = fopen("memotest.txt", "w+");

	const char * contents = "hi, i am an memo";

	//cout << sizeof(contents) << endl;
	//getchar();

	//fwrite(contents, sizeof(char), sizeof(contents), f);
	fwrite(contents, sizeof(char), 17, f);
	fclose(f);

	return 0;
}