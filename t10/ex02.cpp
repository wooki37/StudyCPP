// += -= *= /= %=
#include <stdio.h>
int main() {
	int a = 5;

	a += 6;	// a = a + 6;
	printf("%d\n", a);
	a *= 7; // a = a * 7;
	printf("%d\n", a);
	a -= 8;	// a = a - 8;
	printf("%d\n", a);
	a %= 9;	// a = a % 9;
	printf("%d\n", a);
}