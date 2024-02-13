// 구조체 포인터

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
	ProductInfo myProduct{ 523324, "제주 한라봉", 20000 };

	ProductSale(&myProduct, 10);

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("상품 가격 : %d\n", myProduct.cost);
}