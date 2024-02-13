// 비교 연산자
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	// bool : 진리값을 저장하는 변수 (1바이트)
	bool w = a > b;
	bool e = a < b;
	bool t = a == b;	// '==' : 같다

	// a >= b : a는 b보다 크거나 같다
	// a <= b : a는 b보다 작거나 같다
	// a != b : a는 b가 아니다

	//int p = a > b;
	//int q = a < b;
	//int r = a == b;	// '==' : 같다

	//printf("%d\n", p);
	//printf("%d\n", q);
	//printf("%d\n", r);
	printf("%d\n", w);
	printf("%d\n", e);
	printf("%d\n", t);

	// 2 > 3 -> 거짓
	// 참 : 1, 거짓 : 0
}