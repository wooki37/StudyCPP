// ����Լ�(Recursion)
// ex) �б� (��� �� �б� ��)

#include <stdio.h>

void Rec(int n) {
	if (n > 5) return;
	printf("n = %d\n", n);
	Rec(n + 1);
}

int main() {
	Rec(1);
}