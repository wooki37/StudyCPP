#include <stdio.h>

struct Point { int x, y; };

int main() {
	// struct Point { int x, y; };	// (»ý·« Àü) : typedef struct {int x, y;} Point;

	Point p;

	p.x = 3;
	p.y = 4;
	printf("(%d, %d)\n", p.x, p.y);
	printf("sizeof(p) = %d\n", sizeof(p));
}