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

public :
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

	string file_name = "Memo_" + now.substr(0,3) + ".txt";
	//string file_name = "Memo_" + now.substr(0,sizeof(now)-2) + ".txt";
	cout << file_name << endl;
	ofstream f;
	f.open(file_name);

	//string name;
	//cout << "이름을 입력하세요." << endl;
	//cin >> name;

	//string address;
	//cout << "사는 동네를 입력하세요." << endl;
	//cin >> address;

	//f << "이름" << endl;
	//f << name << endl;
	//f << "동네" << endl;
	//f << address << endl;

	Person person; // person은 Person class의 object (객체)

	cout << "이름을 입력하세요." << endl;
	cin >> person.name;	// person의 member variable (멤버변수)

	cout << "사는 동네를 입력하세요." << endl;
	cin >> person.address;

	//f << "이름" << endl;
	//f << person.name << endl;
	//f << "동네" << endl;
	//f << person.address << endl;

	f << person.toString();

	f.close();

	return 0;
}