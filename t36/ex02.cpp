#include <stdio.h>

// call-by-reference
void PrintArr(int (*arr)[3]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	PrintArr(&arr[0]);
}
