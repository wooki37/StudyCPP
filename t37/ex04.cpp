/*
4.
���ڿ��� �Ű������� �޾� �� ���ڿ����� ������
�����Ͽ� ����ϴ� �Լ��� �ۼ��غ�����.
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