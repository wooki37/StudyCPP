// ���� ��� : �� �ڽ�Ŭ������ ���� �θ� Ŭ������ ������ �ִ� ��� 
// ���̾Ƹ�� ����

#include <iostream>
using namespace std;

struct Person {
	int a;
};

struct Mom : Person {
	Mom() {
		int a = 1;
	}
};
struct Dad : Person {
	Dad() {
		int a = 2;
	}
};
struct Child : Mom, Dad {
	int c = 3;
};

int main() {
	Child ch;
	cout << ch.Mom::a << endl;
	cout << ch.Dad::a << endl;
	cout << ch.c << endl;
}