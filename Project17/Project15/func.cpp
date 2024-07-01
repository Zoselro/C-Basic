#include<iostream>
#include "Stock.h"


void Stock::buy(int n, float pr) {
	shares = shares - n;
	share_val = pr;
	set_total();
}

void Stock::sell(int n, float pr) {
	shares = shares + n;
	share_val = pr;
	set_total();
}

void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "ȸ�� �� : " << name << endl;
	cout << "�ֽ� �� : " << shares << endl;
	cout << "�ְ� : " << share_val << endl;
	cout << "�ֽ� �� ��ġ : " << tot_val << endl;
}

Stock &Stock::topval(Stock& s) {
	if (s.share_val > share_val) 
		return s;
	else return *this;
}

Stock::Stock(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}
//�����ε��� default�����ڸ� ���� �� �ʱ�ȭ
Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}


//�ı��� ���ϰ� �����ʰ� ����� ���������� �Ű������� ������ ����.
Stock::~Stock() {
	cout << name << "Ŭ���� �Ҹ�. \n" << endl;
}