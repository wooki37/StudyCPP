// call-by-value
// call-by-reference

#include <stdio.h>

void Swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a, b;

	scanf("%d%d", &a, &b);

	Swap(a, b);

	printf("a = %d, b = %d\n", a, b);
}