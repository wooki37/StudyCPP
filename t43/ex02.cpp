// 2. ���� ��ĭ�� �� �ڵ��?

#include <stdio.h>

struct Point {
	int x, y;
};
void pSwap(Point* p) {
	// x��ǥ�� y��ǥ�� ��ȯ
	int temp = p->x;
	p->x = p->y;
	p->y = temp;

}
int main() {
	Point pos = { 3, 4 };
	pSwap(&pos);
	printf("(%d, %d)\n", pos.x, pos.y);
}