// 다운캐스팅
// static_cast : 정적 (컴파일) dynamic_cast : 동적 (런타임)
// RTTI : Run Time Type Information/Identification

#include <iostream>

using namespace std;

class Base {	// 다형 클래스 : 가상함수가 하나라도 포함된 클래스를 일컫음.
public :
	virtual void f() {}
	int x;
};
class Derived : public Base {
public :
	void f() {}
	int y;
};
int main() {
	cout << sizeof(Base) << endl;
	cout << sizeof(Derived) << endl;

	int* a = (int*)new Base;
	cout << a[0] << " " << a[1] << endl;

	int* b = (int*)new Derived;
	cout << b[0] << " " << b[1] << " " << b[2] << endl;

	int* c = (int*)new Derived;
	cout << c[0] << " " << c[1] << " " << c[2] << endl;

	delete a;
	delete b;
	delete c;
}

