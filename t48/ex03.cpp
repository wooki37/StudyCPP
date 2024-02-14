// 난수 : 랜덤 값

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
	// seed
	srand(time(NULL)); // 1970/01/01 00:00:00로부터 지난 시간, 초 단위

	//printf("%d\n", time(NULL));	

	for (int i = 1; i <= 10; i++) {
		printf("%d\n", rand() % 10 + 1);
	}
}
