// ����ü ������

#include <stdio.h>

struct ProductInfo {
	int num;
	char name[100];
	int cost;
};
void ProductSale(ProductInfo *p, int percent) {
	p -> cost -= p -> cost * percent / 10;
}

int main() {
	ProductInfo myProduct{ 523324, "���� �Ѷ��", 20000 };

	ProductSale(&myProduct, 10);

	printf("��ǰ ��ȣ : %d\n", myProduct.num);
	printf("��ǰ �̸� : %s\n", myProduct.name);
	printf("��ǰ ���� : %d\n", myProduct.cost);
}