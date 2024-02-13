#include <stdio.h>

// call-by-value : 값만 전달
// call-by-reference : 참조 전달

void PrintArr(int *arr) {
	for (int i = 0; i < 4; i++) {
		arr[i] *= 2;
	}
}

int main() {
	int arr[4] = { 1, 2, 3, 4 };

	PrintArr(arr);

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}