// 다중 상속 : 한 자식클래스가 여러 부모 클래스를 가지고 있는 상속 
// 다이아몬드 문제

#include <iostream>
using namespace std;

struct Person {
	int a;
};

struct Mom : Person {
	Mom() {
		int a = 1;
	}
};
struct Dad : Person {
	Dad() {
		int a = 2;
	}
};
struct Child : Mom, Dad {
	int c = 3;
};

int main() {
	Child ch;
	cout << ch.Mom::a << endl;
	cout << ch.Dad::a << endl;
	cout << ch.c << endl;
}