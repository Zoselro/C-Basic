#include<iostream>
#define SIZE 8

using namespace std;

int sumArr(int*, int);
int sumArr(int*, int*);

int main() {

	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	int sum = sumArr(arr, SIZE);
	cout << "�Լ��� �� ���� " << sum << " �Դϴ�.";
	
	sum = sumArr(arr, arr + 3);
	cout << "�Լ��� �� ��°������ ���� " << sum << " �Դϴ�.";

	
	return 0;
}

int sumArr(int* arr, int n) {
	cout << "size of arr " << sizeof arr << endl;
	int total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total;

}

int sumArr(int* begin, int* end) {
	int total = 0;
	int* pt;

	cout << "\n" << begin << endl;
	cout << end << endl;

	for (pt = begin; pt != end; pt++)
		total += *pt;

		return total;
}