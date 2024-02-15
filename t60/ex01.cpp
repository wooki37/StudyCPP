// const ���ӻ�
// 1. �Ű������� ���ȭ (��� �Լ�)
// 2. �޼����� ���ȭ (����޼���)

#include <iostream>

using namespace std;

class Account {
public :
	Account() : money(0) {}
	Account(int money) : money(money) {}

	void Deposit(int d) {
		d = money;
		money += d;
		cout << d << "���� �����߽��ϴ�." << endl;
	}
	void Draw(int d) {

		if (money >= d) {
			money -= d;
			cout << d << "���� �����ϼ̽��ϴ�." << endl;
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