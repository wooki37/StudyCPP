// exit(0);

#include <stdio.h>
#include <stdlib.h>

int main() {
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int n;
		scanf("%d", &n);

		if (n <= 0) {
			printf("INPUT ERROR\n");
			exit(0);
		}
		sum += n;
	}
	printf("%d\n", sum);

}