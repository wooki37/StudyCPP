// ++ --
#include <stdio.h>

int main() {
	int a = 10;
	printf("원래 a는 %d였다..\n", a);
	a++;	// a = a + 1; a += 1;
	printf("1증가해서 %d이 되었다..\n", a);
	a--;
	printf("1감소해서 a는 %d이 됐다..\n", a);
}