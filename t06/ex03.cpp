// 형변환 : 자료형을 다른 자료형으로 바꾼느 작업
#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 99;
	int sum = math + korean + english;
	double avg = (double)sum / 3;

	printf("%f\n", avg);
}

// 정수 / 정수 = 정수
// 실수 / 정수 = 실수
// 실수 / 실수 = 실수

// 정수 + 정수 = 정수
// 정수 + 실수 = 실수
// 실수 + 실수 = 실수	// 빼기, 곱하기도 마찬가지