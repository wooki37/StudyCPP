#include <stdio.h>

int main() {
	// 1 ~ n ���� ������ ���� ���

	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	printf("%d\n", sum);
}