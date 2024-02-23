// 스마트 포인터

#include <iostream>
#include <memory>

// unique_ptr

using namespace std;

class Test {
public :
	Test(int x) : x(x) { cout << "생성자" << endl; }
	~Test() { cout << "소멸자" << endl; }
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

	//unique_ptr<int>b(a.release());	// 소유권 이전
}