#include <stdio.h>

// ��������
int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) {	// cost, cnt = �Ű�����
	if (money < cost) {
		printf("�ܾ��� �����մϴ�..�����ϼ���\n");
		return -1;
	}
		// �������� ���.
		itemCnt += cnt;
		money -= cost;
		printf("�������� �����߽��ϴ�.\n");
		printf(" ������ ����: %d\n", itemCnt);
		printf(" �ܾ�: %d\n", money);
		return 0;
}

int main() {
	int result;	// ��������

	// �������� ���.
	result = buyItem(3000, 1);

	/* �߷� */

	// �������� ���.
	buyItem(50, 2);
}