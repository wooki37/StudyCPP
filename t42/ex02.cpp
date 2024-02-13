#include <stdio.h>

struct Point {
	int x, y;

	void MoveRight() { x++; }
	void MoveLeft() { x--; }
	void MoveUp() { y++; }
	void MoveDown() { y--; }
};

int main() {
	Point p = { 2, 5 };

	p.MoveDown();
	p.MoveRight();

	printf("(%d, %d)\n", p.x, p.y);
}