/*
4.
문자열을 매개변수로 받아 그 문자열에서 공백을
제거하여 출력하는 함수를 작성해보세요.
*/

#include <stdio.h>

void Print_NoSpace(const char noSpace[]) {
	for (int i = 0; noSpace[i] != '\0'; i++) {
		if (noSpace[i] != ' ')
		printf("%c", noSpace[i]);
	}
}
int main() {
	Print_NoSpace("Hello, World!\n");
	Print_NoSpace("My Name Is Joo~\n");
}