#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char name1[15] = "";
	cout << name1 << "�Դϴ�.";
	//cin >> name1;
	cin.getline(name1, 15);
	cout << name1 << "�Դϴ�.";
	cout << "���ڴ� " << strlen(name1) << "�� �Դϴ�.";
	cout << "������� " << sizeof(name1) << "�Դϴ�.\n";

	string str1;
	string str2 = "sim";

	str1 = str2;

	cout << str1[0] << endl;

	return 0;
}