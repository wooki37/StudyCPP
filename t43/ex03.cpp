// 3. �ڵ忡�� pSwap �Լ��� Point ����ü�� ����־� ������!!!!!!!

#include <stdio.h>

struct Point {
	int x, y;

	void pSwap() {
		// x��ǥ�� y��ǥ�� ��ȯ
		int temp = x;
		x = y;
		y = temp;
	}
};

int main() {
	Point pos = { 3, 4 };
	pos.pSwap();
	printf("(%d, %d)\n", pos.x, pos.y);
}