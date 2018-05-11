#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;
using namespace chrono;

class Person {

public:
	string name;
	string address;

	string toString() {
		return "이름\n" + name + "\n동네\n" + address + "\n";
	}
};

int main() {

	string now;
	system_clock::time_point p = system_clock::now();
	std::time_t t = system_clock::to_time_t(p);
	now = ctime(&t);

	string file_name = "Memo_" + now.substr(0, 3) + ".txt";
	ofstream f;
	f.open(file_name);

	while (true) {
		Person person;
		cout << "이름을 입력하세요. 끝내려면 q" << endl;
		cin >> person.name;

		if (person.name == "q") break;

		cout << "사는 동네를 입력하세요." << endl;
		cin >> person.address;

		f << person.toString();
	}

	f.close();

	return 0;
}