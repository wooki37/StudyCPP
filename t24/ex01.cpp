// ������(pointer) : ������ ����Ű��, ������ �ּҸ� �����ϴ� ����

#include <stdio.h>

int main() {
	int a = 20;
	char c = 'h';

	int* ptr_a;
	char* ptr_c;

	ptr_a = &a;	// &a : a�� �ּڰ�

	printf("a�� �� : %d\n", a);
	printf("a�� �ּڰ� : %d\n", &a);
	printf("ptr_a�� ����� �� : %d\n", ptr_a);
	printf("ptr_a�� ����Ű�� ������ �� : %d\n", *ptr_a);
}

