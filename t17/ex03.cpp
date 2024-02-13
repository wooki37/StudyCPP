#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1, sum = 0; i <= n; sum += i, i++)
	printf("%d\n", sum);
}