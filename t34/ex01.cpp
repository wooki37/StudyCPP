// Prototype : ����(������ ����), ����ǰ
#include <stdio.h>

void Walk(int);
void Rotate(int);
void DrawSquare();

int main() {
	DrawSquare();
}
// �ȱ� ���
void Walk(int distance) {
	printf("%dcm�� �ɾ����ϴ�.\n", distance);
}

// ���� ���
void Rotate(int angle) {
	printf("%d�� ȸ���߽��ϴ�.\n", angle);
}
void DrawSquare() {
	for (int i = 1; i <= 4; i++) {
		Walk(10);
		Rotate(90);
	}
}