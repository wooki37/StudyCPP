/*
1. 두 숫자를 입력받아서 그 숫자들의 합을 출력하는 프로그램을 만들어 보세요.
*/
#include <stdio.h>

int main() {
	int a, b;

	printf("두 숫자를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("%d\n", a + b);
}