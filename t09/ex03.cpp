/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요. (Z제외)
*/
#include <stdio.h>

int main() {
	char alphabet;

	printf("알파벳을 입력하세요 : ");
	scanf("%c", &alphabet);

	char nextAlphabet = alphabet + 1;
	printf("%c\n", nextAlphabet);
}
