#include <iostream>

using namespace std;
int main() {

	//����ü(Union)
	//���� �ٸ����������� �� ���� �� ������ ������ �� ����.
	union MyUnion {
		int intval;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intval = 3;
	cout << test.intval << endl;
	test.longVal = 13;
	cout << test.intval << endl;
	cout << test.longVal<< endl;
	test.floatVal = 3.3;
	cout << test.intval << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;
	
	//����ü(enum)
	//��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���.
	

/*	enum spectrum { red, orange, yellow, green, // red = 0, orange = 1, yellow = 2 
	blue, violet, indigo, ultraviolet};*/

	enum spectrum {
		red = 3, orange = 5 , yellow = 7 , green = 9,
		blue = 11, violet = 13, indigo = 15, ultraviolet = 17
	}; // ���Ƿ� ����� �����Ͽ� ��� �� �� �ִ�.

	spectrum a = orange;
	
	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;

	int c = yellow;

	cout << b+c << endl;

	return 0;
}