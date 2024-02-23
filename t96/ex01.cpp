// ����Ʈ ������

#include <iostream>
#include <memory>

// unique_ptr

using namespace std;

class Test {
public :
	Test(int x) : x(x) { cout << "������" << endl; }
	~Test() { cout << "�Ҹ���" << endl; }
	int GetX() const { return x; }
private :
	int x;
};

int main() {
	unique_ptr<Test> a(new Test(5));
	cout << a->GetX() << endl;
	cout << "=======" << endl;
	a.reset(new Test(6));
	a->GetX();
	cout << "=======" << endl;

	//unique_ptr<int>b(a.release());	// ������ ����
}