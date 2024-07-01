#include<iostream>
using namespace std;


struct Drink {
	string name;
	int price;
};


class machine {
private:
	Drink drinks[4] = { 
		{"�ݶ�", 2000}, {"���̴�", 1800}, 
		{"��Ű��", 2200}, {"�����ֽ�",1500} 
	};
	int money;
	int tot;
public:
	machine();
	machine(int, int);
	void searchName(string);
	void changeMoney(string, int);
};

machine::machine() {
	money = tot = 0;
}

machine::machine(int n, int m) {
	money = n;
	tot = m;
}

int main() {

	machine machine;
	machine.changeMoney("�����ֽ�", 2000);

	return 0;
}

void machine::searchName(string n) {
	int cnt = sizeof(drinks) / sizeof(drinks[0]);

	for (int i = 0; i < cnt; i++) {
		if (drinks[i].name == n) {
			cout << "���� �̸� : " << drinks[i].name << ", ���� : " << drinks[i].price << "�Դϴ�.\n";
		}
		else{
			cout << "���ᰡ �������� �ʽ��ϴ�.\n";
			return;
		}
	}
}
/*
	���� ���� �̻��� money�� ���� �ְ�, �ùٸ� ���Ḧ �������� ��
	���� ���� �̸��� money�� ���� �ְ�, �ùٸ� ���Ḧ �������� ��
	�ùٸ��� ���� ���Ḧ ���� ���� ��
*/

void machine::changeMoney(string n, int money) {
	int cnt = sizeof(drinks) / sizeof(drinks[0]);

	for (int i = 0; i < cnt; i++) {
		if (drinks[i].name == n && drinks[i].price <= money) {
			money -= drinks[i].price;
			cout << "���� �ݾ��� " << money << "�Դϴ�. " << endl;
			return;
		}
		else if (drinks[i].name == n && drinks[i].price > money) {
			cout << "���� �� ���� �����մϴ�." << endl;
			return;
		}
		else if (drinks[i].name != n){
			cout << "���ᰡ �������� �ʽ��ϴ�." << endl;
			return;
		}
		else {
			cout << "Error" << endl;
		}
	}

}