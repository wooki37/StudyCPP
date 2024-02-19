// 접근 제어
// private(외부접근 x, 자식클래스 x), public(외부접근 o, 자식클래스 o), protected(외부접근 x, 자식클래스 o)

#include <iostream>

using namespace std;

class Base {
public :
	int bPublic;

protected :
	int bProtected;

private :
	int bPrivate;
};
class Derived : public Base {
public :
	int dPublic;

	void DFunc() {
		bPublic = 1;
		bProtected = 2;
		//bPrivate = 3;
		dPublic = 4;
		dPrivate = 5;
	}

private :
	int dPrivate;
};

int main() {
	Base b;
	Derived d;

	b.bPublic = 1;
	b.bPublic;
}