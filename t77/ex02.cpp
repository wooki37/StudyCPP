#include <iostream>

using namespace std;

class Base {
public:
	void Print() {
		cout << "From Base!!!" << endl;
	}
};
class Derived : public Base {
public:
	void Print() {
		cout << "From Derived!!!" << endl;
	}
};
class Derived2 : public Base {

};

int main() {	// ���� ���ε�
	Base* b = new Derived();
	b->Print();
	b = new Derived2();
	b->Print();
}