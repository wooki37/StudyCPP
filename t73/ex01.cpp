// 0. 다음 프로그램의 실행 결과는?

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