// 1. ��� ����� �����Ͻÿ�.

#include <iostream>

using namespace std;

int main() {
	int a = 10, b = 20, c = 30;
	int* p = &a;
	int& r = b;
	int** pp = &p;	// p��� �����͸� ����Ű�� ���� ������ pp (24��)
	int* (&rp) = p;	// p��� �����͸� ����Ű�� ���۷��� ���� rp (51��)

	r = c / *p;
	rp = &c;
	**pp = 40;
	*p = 50;
	*pp = &a;
	*rp = 60;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << *p << endl;
	cout << r << endl;
	cout << **pp << endl;
	cout << *rp << endl;
}