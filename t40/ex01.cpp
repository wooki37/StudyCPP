#include <stdio.h>

struct ProductInfo {
	int num;	// 4B
	char name[100];	// 100B
	int cost;	// 4B
};

int main() {
	ProductInfo myProduct = {
		479829, "���� �Ѷ��", 19900
	};
	printf("��ǰ ��ȣ : %d\n", &myProduct.num);
	printf("��ǰ �̸� : %d\n", myProduct.name);
	printf("��ǰ ���� : %d\n", &myProduct.cost);

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct));
}