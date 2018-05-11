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
		return "�̸�\n" + name + "\n����\n" + address + "\n";
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
	//cout << "�̸��� �Է��ϼ���." << endl;
	//cin >> name;

	//string address;
	//cout << "��� ���׸� �Է��ϼ���." << endl;
	//cin >> address;

	//f << "�̸�" << endl;
	//f << name << endl;
	//f << "����" << endl;
	//f << address << endl;

	Person person; // person�� Person class�� object (��ü)

	cout << "�̸��� �Է��ϼ���." << endl;
	cin >> person.name;	// person�� member variable (�������)

	cout << "��� ���׸� �Է��ϼ���." << endl;
	cin >> person.address;

	//f << "�̸�" << endl;
	//f << person.name << endl;
	//f << "����" << endl;
	//f << person.address << endl;

	f << person.toString();

	f.close();

	return 0;
}