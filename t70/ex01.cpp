// 이동 시맨틱

#include <iostream>

using namespace std;

class String {
public:
	String() {
		cout << "String() : " << this << endl;
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		cout << "String(const char*) : " << this << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);	// 깊은 복사
	}

	String(const String& rhs) {	// 복사 생성자
		cout << "String(const String&) : " << this << endl;
		len = rhs.len;
		alloc(len);
		strcpy(strData, rhs.strData);	// 깊은 복사
	}
	String(String&& rhs) {	// 포인트 : r-value 참조를 매개변수로 받는 생성자가 호출이 된다.
		cout << "String(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
	}

	~String() {
		cout << "~String() : " << this << endl;
		release();
		strData = NULL;
	}

	String& operator=(const String& rhs) {	// 복사 대입 연산자
		cout << "String &operator=(const String&) : " << this << endl;
		if (this != &rhs) {
			release();
			len = rhs.len;
			alloc(len);
			strcpy(strData, rhs.strData);	// 깊은 복사

		}
		return *this;
	}
	String& operator=(String&& rhs) {
		cout << "String &operator=(String&&) : " << this << endl;
		len = rhs.len;
		strData = rhs.strData;
		rhs.strData = NULL;
		return *this;
	}

	char* GetStrData() const {
		return strData;
	}
	int GetLen() const {
		return len;
	}
	void SetStrData(const char* str) {
		cout << "void SetStrData(const char*) : " << this << ", " << str << endl;
		len = strlen(str);
		alloc(len);
		strcpy(strData, str);
	}
private:
	void alloc(int len) {
		strData = new char[len + 1];
		cout << "strData allocated : " << (void*)strData << endl;
	}
	void release() {
		delete[] strData;
		if (strData) cout << "strData released : " << (void*)strData << endl;
	}

	char* strData;
	int len;
};
String getName() {
	cout << "==== 2 ====" << endl;
	String res("Doodle");
	cout << "==== 3 ====" << endl;
	return res;
}

int main() {
	String a;
	cout << "==== 1 ====" << endl;
	a = getName();
	cout << "==== 4 ====" << endl;
}
