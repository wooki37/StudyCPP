// 2. 다음 프로그램의 실행 결과는?

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
		printf("슬롯 %d의 아이템을 %d번 썼습니다.\n", i, UseCnt[i]);
	}
}
void UseItem(int itemNum) {
	UseCnt[itemNum]++;
}