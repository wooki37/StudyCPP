// Prototype : 원형(원래의 형태), 시제품
#include <stdio.h>

void Walk(int);
void Rotate(int);
void DrawSquare();

int main() {
	DrawSquare();
}
// 걷기 기능
void Walk(int distance) {
	printf("%dcm를 걸었습니다.\n", distance);
}

// 돌기 기능
void Rotate(int angle) {
	printf("%d도 회전했습니다.\n", angle);
}
void DrawSquare() {
	for (int i = 1; i <= 4; i++) {
		Walk(10);
		Rotate(90);
	}
}