#include <stdio.h>

int main() {
	FILE* in;	// ½ºÆ®¸²
	int n;

	in = fopen("intput.txt", "r");

	if (in != NULL) {
		fscanf(in, "%d", &n);
		printf("%d\n", n);
		fclose(in);
	}
}