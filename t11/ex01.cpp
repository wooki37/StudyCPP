// �� ������
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);

	// bool : �������� �����ϴ� ���� (1����Ʈ)
	bool w = a > b;
	bool e = a < b;
	bool t = a == b;	// '==' : ����

	// a >= b : a�� b���� ũ�ų� ����
	// a <= b : a�� b���� �۰ų� ����
	// a != b : a�� b�� �ƴϴ�

	//int p = a > b;
	//int q = a < b;
	//int r = a == b;	// '==' : ����

	//printf("%d\n", p);
	//printf("%d\n", q);
	//printf("%d\n", r);
	printf("%d\n", w);
	printf("%d\n", e);
	printf("%d\n", t);

	// 2 > 3 -> ����
	// �� : 1, ���� : 0
}