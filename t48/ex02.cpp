// sscanf & sprintf

#include <stdio.h>

int main() {
	//char str[] = "405";
	//int n;

	//sscanf(str, "%d", &n);
	//printf("nÀÇ °ª : %d\n", n);
	int n = 450;
	char str[100];

	sprintf(str, "%d", n);
	printf("%s\n", str);
}