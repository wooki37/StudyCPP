// override : �켱�ϴ�

#include <iostream>

using namespace std;

class Base {
public :
	int a = 10;
	void Print() {
		cout << "From Base!!!" << endl;
	}
};
class Derived : public Base {
public :
	int a = 20;
	void Print() {
		cout << "From Derived!!!" << endl;
	}
};
int main() {
	Derived d;

	d.Print();
	d.Base::Print();
	d.Derived::Print();
}