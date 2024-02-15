// 클래스 = 자료 저장 + 자료 처리 => 변수 + 함수
// 클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀(자료형)
// 객체(오브젝트) : 그 틀을 이용하여 찍어낸 개체(변수, 메모리 상의 공간)

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
		cout << "TV를 켰습니다." << endl;
	}
	void off() {
		PowerOn = false;
		cout << "TV를 껐습니다." << endl;
	}
	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 999) {
			Channel = cnl;
			cout << "채널을 " << cnl << "(으)로 바꿨습니다." << endl;
		}
		else {
			cout << "채널은 999번까지만 있습니다." << endl;
		}
	}

	void setVolume(int vol) {
		if (vol >= 0 && vol <= 100) {
			Volume = vol;
			cout << "볼륨을 " << vol << "(으)로 바꿨습니다." << endl;
		}
	}
};

int main() {
	TV Lg;
	Lg.on();
	Lg.setChannel(1000);
	Lg.setVolume(50);
}