#include <stdio.h>

struct Time {
	int h, m, s;

	int TotalSec() {
		return 3600 * h + 60 * m + s;
	}
};

int main() {
	Time t = { 1, 22, 48 };

	printf("TotalSec : %d(√ )\n", t.TotalSec());
}