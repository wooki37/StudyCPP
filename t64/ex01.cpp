// 다음 코드의 출력 결과는?

#include <iostream>

using namespace std;

class MyClass {
public :
	MyClass() : num(cnt++), ch('\0') {}

	void Check(MyClass* ptr) {	// ptr == &obj[0]
		if (ptr + num == this) {	// ptr + num == &ptr[num] == &obj[num]
			cout << num << endl;
		}
	}
	static int cnt;
private :
	int num;
	char ch;
};
int MyClass::cnt = 0;

int main() {
	MyClass obj[5];

	cout << "Test #1 : " << endl;
	for (int i = 0; i < 5; i++) {
		obj[i].Check(obj);	// obj == &obj[0] : obj의 주솟값을 매개변수로 넘겼다.
	}
	cout << "Text #2 : " << endl;
	for (MyClass& i : obj) {
		i.Check(obj);
	}
	cout << "cnt = " << MyClass::cnt << endl;
}

