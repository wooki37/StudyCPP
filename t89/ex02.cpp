#include <iostream>

using namespace std;

// 다중 상속은 인터페이스로부터만 받는다.
// 인터페이스 : 모든 메서드가 순수 가상 함수이고 멤버(static이 아닌) 변수는 없는 클래스
// 추상 클래스랑 비슷 : 순수 가상 함수가 하나 이상 들어있는 클래스
// 다형적 클래스랑도 비슷 : 가상 함수가 하나 이상 들어 있는 클래스

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
		cout << "먹는다..." << endl;
	}
	void Study() {
		cout << "공부한다..." << endl;
	}
};
struct IWorker : virtual IPerson {
	virtual void Work() = 0;
};
struct Researcher : IStudent, IWorker {
	void Eat() {
		cout << "먹는다..." << endl;
	}
	void Study() {
		cout << "공부한다..." << endl;
	}
	void Work() {
		cout << "일한다..." << endl;
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