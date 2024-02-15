// const 쓰임새
// 1. 매개변수의 상수화 (모든 함수)
// 2. 메서드의 상수화 (멤버메서드)

#include <iostream>

using namespace std;

class Account {
public :
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		d = money;
		money += d;
		cout << d << "원을 예금했습니다." << endl;
	}
	void Draw(int d) {

		if (money >= d) {
			money -= d;
			cout << d << "원을 인출하셨습니다." << endl;
		}
	}
	int ViewMoney() const {
		return money;
	}

private :
	int money;
};

int main() {
	Account doodle(100);

	doodle.Deposit(100);
	doodle.Draw(20);

		cout << doodle.ViewMoney() << endl;
}