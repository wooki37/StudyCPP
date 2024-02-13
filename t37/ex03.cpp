// 3. 다음 프로그램의 실행 결과는? (재귀)

#include <stdio.h>

void Rec(int n) {
	if (n == 0) return;
	printf("%d", n);
	Rec(n - 1);
	printf("%d", n);
}
int main() {
	Rec(5);
}