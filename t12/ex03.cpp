#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	if (n > 0) {
		printf("n�� ���\n");
	}
	else if (n == 0) {
		printf("n�� 0\n");
	}
	else if (n == -7) {
		printf("n�� -7\n");
	}
	else {
		printf("n�� -7�� �ƴ� ����");
	}
}