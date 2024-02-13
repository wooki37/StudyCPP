#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};

void ProductSwap(ProductInfo* a, ProductInfo* b) {
	ProductInfo tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	ProductInfo myProduct{ 523324, "���� �Ѷ��", 20000 };
	ProductInfo otherProduct{ 905321, "���� ������", 15000 };

	ProductSwap(&myProduct, &otherProduct);

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��ǰ ���� : %d\n", myProduct.cost);
}