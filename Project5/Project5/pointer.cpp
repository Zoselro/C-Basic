#include<iostream>
using namespace std;

int main() {

	int val = 3;
	cout << "val�� �ּ� : " << & val << endl;

	int* p1 = &val;
	cout << "p1�� �� : " << *p1 << endl;

	int** p2 = &p1;
	cout << "*p2�� �� : " << *p2 << endl;
	cout << "p2�� �� : " << **p2 << endl;
	return 0;
}