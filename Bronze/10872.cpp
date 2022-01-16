#include <iostream>
using namespace std;

int factorial(int n) {
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
} // 함수 사용, n이 정수면 n 곱하기 n-1 반복

int main() {
	int n;
	cin >> n;
	cout << factorial(n) << '\n';
    return 0;
}