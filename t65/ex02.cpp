// 동적 배열
#include <iostream>

using namespace std;

int main() {
	int* arr;
	int len;

	cout << "동적 할당 할 배열 길이 입력 : ";
	cin >> len;

	arr = new int[len];

	for (int i = 0; i < len; i++) {
		arr[i] = len - i;
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;
}