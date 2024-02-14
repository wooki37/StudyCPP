// 상수 : 변하지 않는 수
// 변수 : 변할 수 있는 수
// const, 매크로, enum

#include <stdio.h>

int main() {
	const float PI = 3.14159;

	float a = PI;

	printf("파이 = %.2f\n", PI);
	printf("&PI= %d\n", &PI);
}