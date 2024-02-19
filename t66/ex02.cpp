// char *str = "Hello";
// #include <string>
// string s;

#include <iostream>

using namespace std;

class String {
public :
	String() {
		strData = NULL;
		len = 0;
	}
	String(const char* str) {
		strData = new char[strlen(str) + 1];
		strcpy(strData, str);	// ±Ì¿∫ ∫πªÁ
	}
	~String() {
		delete[] strData;
	}
	char* GetStrData() const {
		return strData;
	}
	int GetLen() const {
		return len;
	}
private :
	char* strData;
	int len;
};
int main() {
	String s;
}