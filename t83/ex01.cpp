// 다운캐스팅 : 부모클래스에서 자식클래스로 내려보냄
// static_cast, dynamic_cast
// double -> int / int -> double

#include <iostream>

using namespace std;

class Base {
public :
	int a = 1;
};
class Drv1 : public Base {
public :
	void f() {
		cout << "Drv1::f()" << endl;
		cout << b << endl;
	}
	float b = 3.14;
};
class Drv2 : public Base {
public:
	void f() {
		cout << "Drv2::f()" << endl;
		cout << c << endl;
	}
	int c = 3;
};

int main() {
	Base* b = new Drv1;
	Drv2* d2 = static_cast<Drv2*>(b);
	d2->f();

	delete b;
}