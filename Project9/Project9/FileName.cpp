#include<iostream>
using namespace std;

struct Time
{
	int hours;
	int mins;
};

//Time sum(Time*, Time*);
void showTime(Time);
Time sum(Time, Time);
int main() {
	Time day1 = {};
	Time day2 = {};

	cout << "day1�� �ð� �Է� : " << endl;
	cin >> day1.hours;
	cout << "day1�� �� �Է� : " << endl;
	cin >> day1.mins;

	cout << "day2�� �ð� �Է� : " << endl;
	cin >> day2.hours;
	cout << "day2�� �� �Է� : " << endl;
	cin >> day2.mins;

	//Time total = sum(&day1, &day2);
	Time total = sum(day1, day2);

	cout << "��Ʋ �ҿ� �ð� : ";
	showTime(total);

	return 0;
}

/*Time sum(Time* t1, Time* t2) {
	
	Time total;

	total.hours = t1->hours + t2->hours + (t1->mins + t2->mins) / 60;
	total.mins = (t1->mins + t2->mins) % 60;
	return total;
}*/

void showTime(Time t1) {
	cout << t1.hours << "�ð�, " << t1.mins << "�� �Դϴ�." << endl;
}


Time sum(Time t1, Time t2) {

	Time total;

	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / 60;
	total.mins = (t1.mins + t2.mins) % 60;
	return total;
}