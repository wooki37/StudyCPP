// 재귀함수(Recursion)
// ex) 학교 (배울 학 학교 교)

#include <stdio.h>

void Rec(int n) {
	if (n > 5) return;
	printf("n = %d\n", n);
	Rec(n + 1);
}

int main() {
	Rec(1);
}