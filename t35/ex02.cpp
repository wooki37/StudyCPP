// 팩토리얼
// 5! = 5*4*3*2*1 = 120 == n! = n * (n - 1)!

#include <stdio.h>

// n을 매개변수 -> n!을 return
int Factorial(int n) {
	if (n == 1) return 1;
	return n * Factorial(n - 1);
}

int main() {
	printf("%d\n", Factorial(5));
}