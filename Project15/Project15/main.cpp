#include<iostream>
#include "Stock.h"

int main() {
	cout << "�����ڸ� �̿��� ��ü ����\n";
	Stock temp("Panda", 100, 1000);

	cout << "����Ʈ �����ڸ� �̿��Ͽ� ��ü ����\n";
	Stock temp2;

	cout << "temp�� temp2�� ����\n";
	temp2 = temp;

	cout << "temp�� temp2 ���\n";
	temp.show();
	temp2.show();

	cout << "�����ڸ� �̿��Ͽ� temp ���� �缳��\n";
	temp = Stock("Coding", 200, 1000);

	cout << "�缳���� temp ���\n";
	temp.show();

	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

	cout << "A�� B�� share_val�� ū ��ü��\n";
	s1.topval(s2).show();

	s1.update(2000);

	cout << "A�� B�� share_val�� ū ��ü��\n";
	s1.topval(s2).show();

	return 0;
}