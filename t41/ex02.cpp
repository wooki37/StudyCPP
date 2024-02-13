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
	ProductInfo myProduct{ 523324, "제주 한라봉", 20000 };
	ProductInfo otherProduct{ 905321, "성주 꿀참외", 15000 };

	ProductSwap(&myProduct, &otherProduct);

	printf("상품 번호 : %d\n", myProduct.num);
	printf("상품 이름 : %s\n", myProduct.name);
	printf("상품 가격 : %d\n", myProduct.cost);
}