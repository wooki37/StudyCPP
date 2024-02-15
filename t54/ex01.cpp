// Ŭ���� = �ڷ� ���� + �ڷ� ó�� => ���� + �Լ�
// Ŭ����(Ÿ��) : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��� �� Ʋ(�ڷ���)
// ��ü(������Ʈ) : �� Ʋ�� �̿��Ͽ� �� ��ü(����, �޸� ���� ����)

#include <iostream>

using namespace std;

// private, protected, public

class TV {
	bool PowerOn;
	int Channel;
	int Volume;

public:
	void on() {
		PowerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}
	void off() {
		PowerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}
	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			Channel = cnl;
			cout << "ä���� " << cnl << "(��)�� �ٲ���ϴ�." << endl;
		}
		else {
			cout << "ä���� 999�������� �ֽ��ϴ�." << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			Volume = vol;
			cout << "������ " << vol << "(��)�� �ٲ���ϴ�." << endl;
		}
	}
};

int main() {
	TV Lg;
	Lg.on();
	Lg.setChannel(1000);
	Lg.setVolume(50);
}