#include <iostream>
using namespace std;

int main(){
    int a, b; // 세 자리수 곱셈
    int c, d, e; // 계산
    int result = 0;

    cin >> a >> b;
    
    c = a * (b % 10);
    d = a * ((b/10) % 10);
    e = a * (((b/10) / 10) % 10);
    result = a * b;

    cout << c << '\n' << d << '\n' << e << '\n' << result << '\n';
    return 0;
}