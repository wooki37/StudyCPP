// 전치와 후치
#include <stdio.h>

int main() {
	int a = 10;
	int b;

	//printf("=== 전치 증가 연산 ===\n");
	//b = ++a;
	//printf("a : %d\n", a);
	//printf("b : %d\n", b);

	printf("=== 후치 증가 연산 ===\n");
	b = a++;
	printf("a : %d\n", a);
	printf("b : %d\n", b);
}