// 2. ���� ���α׷��� ���� �����?

#include <stdio.h>

int UseCnt[5] = { 0 };

void UseItem(int);

int main() {
	UseItem(4);
	UseItem(2);
	UseItem(1);
	UseItem(4);
	UseItem(0);

	for (int i = 0; i < 5; i++) {
		printf("���� %d�� �������� %d�� ����ϴ�.\n", i, UseCnt[i]);
	}
}
void UseItem(int itemNum) {
	UseCnt[itemNum]++;
}