#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


// �޸����� ���鲨��
// ���Ϸ� �����ϱ�
// �޸����� ����ó�� �����ϴ� ���ַ� ��� (Ŭ���� �����Ϸ���)

int main() {

	// ���� �����ϴ� ��
	FILE * f = fopen("memotest.txt", "w+");

	const char * contents = "hi, i am an memo";

	//cout << sizeof(contents) << endl;
	//getchar();

	//fwrite(contents, sizeof(char), sizeof(contents), f);
	fwrite(contents, sizeof(char), 17, f);
	fclose(f);

	return 0;
}