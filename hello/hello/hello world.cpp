#include <iostream>
#include <cstdio>
using namespace std; // iostream�� ���ǵǾ��ִ� �Լ��� �ִ� std�� ������ ���� ����
// ���� using namespace std; �� �������� �ʰ� �� ��� std::cout << "hello, world! iostream" << std::endl �̷������� ǥ���ؾ� �Ǳ� ������
// ���ŷο� �� �ִ�.

int main() {

	printf("hello world! cstdio \n"); // c���� ǥ���� ���
	cout << "hello, world! iostream"; // �ٹٲ� x
	cout << "hello, world! iostream" << endl; /* endl �� �ٹٲ� ��, hello, world!iostream ��� ���ڸ� �ٹٲ�(endl)�� �ϸ鼭
												cout(���)�� �޶�� �ǹ� */
	return 0;
}