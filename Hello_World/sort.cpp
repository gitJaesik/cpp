#include <iostream>
// container��� ��
#include <vector>
#include <algorithm>

using namespace std;

// [] �� index
// ���߿� pointer�� ���� �ְ�
// �⺻������ �迭 �Ǵ� �����̳��� index ������ �ϴ� operator

bool compare_(int l, int r) {
	if (l > r) return true;
	return false;
}

int main() {

	// stack�̶�� ����� �����Ǿ�����
	// �˰��� �� filo�˰���
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