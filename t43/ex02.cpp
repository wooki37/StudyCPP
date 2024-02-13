// 2. 다음 빈칸에 들어갈 코드는?

#include <stdio.h>

struct Point {
	int x, y;
};
void pSwap(Point* p) {
	// x좌표와 y좌표를 교환
	int temp = p->x;
	p->x = p->y;
	p->y = temp;

}
int main() {
	Point pos = { 3, 4 };
	pSwap(&pos);
	printf("(%d, %d)\n", pos.x, pos.y);
}