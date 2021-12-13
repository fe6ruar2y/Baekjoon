#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string number;
    cin >> number;

    sort(number.begin(), number.end(), greater<char>()); // 내림차순 정렬
    cout << number << '\n';
    return 0;
}