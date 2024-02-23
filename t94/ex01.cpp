// 함수 포인터

#include <iostream>

using namespace std;

bool compare(int a, int b) {
	return a == b;
}
int main() {
	bool (*fp)(int, int) = compare;
	bool res = (*fp)(2, 2);

	cout << res << endl;
}