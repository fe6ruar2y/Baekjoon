#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    char input;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        sum += input - '0'; // '0'은 아스키 코드로 48이라고 합니다
    }
    cout <<sum << '\n';
    return 0;
}