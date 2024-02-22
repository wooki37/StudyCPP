// 함수 템플릿

#include <iostream>
#include <string>
using namespace std;

class Vector2 {
public :
	Vector2() : x(0), y(0) {}
	Vector2(float x, float y) : x(x), y(y) {}
	float GetX() const { return x; }
	float GetY() const { return y; }

	Vector2& operator +=(const Vector2& rhs) {
		x += rhs.x;
		y += rhs.y;
		return *this;
	}
private :
	float x, y;

};

template<typename T>
T getArraySum(const T arr[], int n) {
	T sum = T();
	for (int i = 1; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
// 위의 template에 int를 넣어주면 아래와 같은 함수로 변환됌.
//int getArraySum(const int arr[], int n) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += arr[i];
//	}
//	return sum;
//}
int main() {
	int iarr[5] = { 3, 1, 4, 1, 5 };
	float farr[5] = {1.2, 3.1, 4.1, 5.4, 9.9};
	Vector2 varr[3] = { Vector2(1, 2), Vector2(3, 4), Vector2(5, 6) };
	string sarr[3] = { "hello", "world", "doodl" };

	int isum = getArraySum<int>(iarr, 5);
	float fsum = getArraySum<float>(farr, 5);
	Vector2 vsum = getArraySum<Vector2>(varr, 3);
	string ssum = getArraySum<string>(sarr, 3);

	cout << isum << endl;
	cout << fsum << endl;
	cout << vsum.GetX() << "," << vsum.GetY() << endl;
	cout << ssum << endl;
}