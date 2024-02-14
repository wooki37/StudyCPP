#include <iostream>

using namespace std;

int main() {
	// r-value

	int a(5);
	int&& r2 = 3;
	int&& r3 = a * a;
}