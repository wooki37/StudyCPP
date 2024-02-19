// 얕은 복사와 깊은 복사 예제 : 객체를 복사할 때(얕은 복사)의 문제점

#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() 생성자 호출" << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) 생성자 호출" << endl;
		len = strlen(str);
		strData = new char[len + 1];	// null 문자를 고려해 len + 1만큼 할당
		cout << "strData 할당 : " << (void*)strData << endl;
		strcpy(strData, str);	// 깊은 복사
	}
	String(String& rhs) {
		strData = rhs.strData;	// 얕은 복사
		len = rhs.len;	// 깊은 복사
	}

	~String() {
		cout << "~String() 소멸자 호출" << endl;
		delete[] strData;
		cout << "strData 해제됨 : " << (void*)strData << endl;
		strData = NULL;
	}
	char* GetStrData() const {
		return strData;
	}
	int GetLen() const {
		return len;
	}
private:
	char* strData;
	int len;
};
int main() {
	String s1("안녕");
	String s2(s1);	// 복사 생성자

	cout << s1.GetStrData() << endl;
	cout << s2.GetStrData() << endl;
}