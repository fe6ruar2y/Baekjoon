#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int result1, result2, result3, result4 = 0;

    cin >> a >> b >> c;

    result1 = (a+b)%c;
    result2 = ((a%c) + (b%c))%c;
    result3 = (a*b)%c;
    result4 = ((a%c) * (b%c))%c;

    cout << result1 << '\n' << result2 << '\n' << result3 << '\n' << result4 << '\n';
    return 0;
}