#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
//	Time operator*(int);
	virtual void show(); // virtual ����޼��� (ȣ���� �޼����� ��ü�� ������ �׿����� �����Ǵ� �Լ��� ����)
	virtual ~Time();
	friend Time operator*(int, Time&);
	/*friend Time operator*(int n, Time& t) {
		return t * n;
	}*/
	int getHour() {
		return hours;
	}
	int getMins() {
		return mins;
	}
	friend std::ostream& operator << (std::ostream&, Time&);
};


class NewTime : public Time { // time�̶�� �������� Ŭ������ NewTime �̶�� �Ļ� Ŭ������ �����. 
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void show();
};

#endif