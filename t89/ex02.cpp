#include <iostream>

using namespace std;

// ���� ����� �������̽��κ��͸� �޴´�.
// �������̽� : ��� �޼��尡 ���� ���� �Լ��̰� ���(static�� �ƴ�) ������ ���� Ŭ����
// �߻� Ŭ������ ��� : ���� ���� �Լ��� �ϳ� �̻� ����ִ� Ŭ����
// ������ Ŭ�������� ��� : ���� �Լ��� �ϳ� �̻� ��� �ִ� Ŭ����

struct IPerson {
	virtual ~IPerson() {}
	virtual void Eat() = 0;
	virtual int GetAge() = 0;
};
struct IStudent : virtual IPerson {
	virtual void Study() = 0;
};
struct Student : IStudent {
	void Eat() {
		cout << "�Դ´�..." << endl;
	}
	void Study() {
		cout << "�����Ѵ�..." << endl;
	}
};
struct IWorker : virtual IPerson {
	virtual void Work() = 0;
};
struct Researcher : IStudent, IWorker {
	void Eat() {
		cout << "�Դ´�..." << endl;
	}
	void Study() {
		cout << "�����Ѵ�..." << endl;
	}
	void Work() {
		cout << "���Ѵ�..." << endl;
	}
	int GetAge() { return age; }
	int age;
};
int main() {
	Student s;
	s.Study();
	Researcher r;
	r.Study();
	r.Work();
}