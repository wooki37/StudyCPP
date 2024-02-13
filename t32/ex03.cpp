#include <stdio.h>

// 전역변수
int itemCnt = 0;
int money = 100;

int buyItem(int cost, int cnt) {	// cost, cnt = 매개변수
	if (money < cost) {
		printf("잔액이 부족합니다..충전하세요\n");
		return -1;
	}
		// 아이템을 산다.
		itemCnt += cnt;
		money -= cost;
		printf("아이템을 구매했습니다.\n");
		printf(" 아이템 개수: %d\n", itemCnt);
		printf(" 잔액: %d\n", money);
		return 0;
}

int main() {
	int result;	// 지역변수

	// 아이템을 산다.
	result = buyItem(3000, 1);

	/* 중략 */

	// 아이템을 산다.
	buyItem(50, 2);
}