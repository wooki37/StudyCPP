#include <stdio.h>

int main() {
	FILE* in, *out;	// ��Ʈ��
	int n;

	in = fopen("input.txt", "r");
	out = fopen("output.txt", "a");

	fscanf(in, "%d", &n);
	fprintf(out, "%d\n", n);

	fclose(in);
	fclose(out);
}