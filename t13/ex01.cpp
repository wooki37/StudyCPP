// ��ø if��
// �߰�ȣ �ڵ� ��Ÿ��

#include <stdio.h>

int main() {
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {
		// a > b > c
		// a > c > b
		// c > a > b
		if (a > c)
			printf("%d\n", a);
		else	// c > a
			printf("%d\n", c);
	}
	else if (b > a)	// b > a
			printf("%d\n", b);
		else	// c > b
			printf("%d\n", c);
	}
