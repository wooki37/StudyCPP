// 범위 기반 for문
#include <iostream>

using namespace std;

int main() {
	int arr[10] = { 3, 1, 4, 2, 4, 5, 6, 7, 8, 2 };

	for (int &n : arr) {
		cout << n << ' ';
		n++;
	}
	cout << endl;

	for (int n : arr) {
		cout << n << ' ';
	}
	cout << endl;
}