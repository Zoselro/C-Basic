#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

#define SIZE 20

int main() {

	using namespace std;

	char animal[SIZE];
	char* ps;

	cout << "���� �̸� : \n";
	cin >> animal;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	
	cout << "�Է��Ͻ� �����̸��� �����Ͽ����ϴ�." << endl;
	cout << "�Է��Ͻ� �����̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << &animal << " �Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�,�� �ּҴ� " << (int*)ps << &ps << " �Դϴ�." << endl;
	
	cout << "animal�� " << animal << endl;
	cout << "&animal�� ���� ��ü�� �ּ��� " << &animal << " �Դϴ�." << endl;
	cout << "int(*animal)�� �迭�� �����ּ��� " << int(*animal) << " �Դϴ�." << endl;
	cout << "ps �� " << ps << endl;
	cout << "(int*)ps �� new�� ���� ���������Ҵ�� �ּ��� " << (int*)ps << " �Դϴ�." << endl;
	cout << "&ps �� ������ ���� ��ü�� �ּ��� " << &ps << " �Դϴ�." << endl;


	struct MyStruct
	{
		char name[20];
		int age;
	};

		MyStruct* temp = new MyStruct;

		cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
		cin >> temp->name;

		cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
		cin >> (*temp).age;

		cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
		cout << "����� " << temp->age << "�� �̱���!\n";

		delete temp;

		MyStruct temp2;
		cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
		cin >> temp2.name;

		cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
		cin >> temp2.age;


		cout << "�ȳ��ϼ���! " << temp2.name << "��!\n";
		cout << "����� " << temp2.age << "�� �̱���!\n";

		return 0;
	}