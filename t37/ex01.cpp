/*
1.
정수 하나를 매개변수로 받아
그 수가 짝수이면 0, 홀수이면 1을 반환하는 함수를 작성해보세요.
*/

#include <stdio.h>

int Parity(int n) {
	if (n % 2 == 0) {
		return 0;
	}
	else return -1;
}

int main() {
	printf("%d\n", Parity(5));
	printf("%d\n", Parity(-3));
	printf("%d\n", Parity(6));
}