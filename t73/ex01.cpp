// 0. ���� ���α׷��� ���� �����?

#include <iostream>

using namespace std;

int main() {
	char str[] = "Hello, World!";
	char* p_str = str;

	cout << p_str << endl;
	cout << str << endl;
	cout << *p_str << endl;
	cout << *str << endl;
}