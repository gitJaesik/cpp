#include <iostream>
// container라고 함
#include <vector>
#include <algorithm>

using namespace std;

// [] 는 index
// 나중에 pointer와 연관 있고
// 기본적으로 배열 또는 컨테이너의 index 역할을 하는 operator

bool compare_(int l, int r) {
	if (l > r) return true;
	return false;
}

int main() {

	// stack이라는 기술로 구현되어있음
	// 알고리즘 중 filo알고리즘
	vector<int> a;

	a.push_back(100);
	a.push_back(4);
	a.push_back(14);
	a.push_back(5);

	for (auto i : a) {
		cout << i << endl;
	}

	cout << "========================" << endl;
	
	sort(a.begin(), a.end(), &compare_);
	//sort(a.begin(), a.end());
	for (auto i : a) 
		cout << i << endl;

	//for (int i = 0; i < a.size(); i++)
	//	cout << a[i] << endl;
	//cout << a[0] << endl;
	//cout << a[1] << endl;
	//cout << a[2] << endl;
	//cout << a[3] << endl;

	getchar();
	getchar();

	return 0;
}