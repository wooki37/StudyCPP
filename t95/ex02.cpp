#include <iostream>
#include <functional>

using namespace std;

template<typename T>
int arrFnMin(const int arr[], int n, T f) {
	int min = f(arr[0]);
	for (int i = 1; i < n; i++) {
		if (f(arr[i]) < min) {
			min = f(arr[i]);
		}
	}
	return min;
}

int main() {
	int arr[7] = { 3, 1, -4, 5, 6 ,-2, 7 };
	// 람다식 (익명 함수)
	auto a = arr[1];
	auto fp = [](int n)->int {return n * n; };
	cout << arrFnMin(arr, 7, [](int n)->int {return n * n; }) << endl;
	cout << arrFnMin(arr, 7, [](int n)->int { return n * (n - 15) / 2; }) << endl;
}