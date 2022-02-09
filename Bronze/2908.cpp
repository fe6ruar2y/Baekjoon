#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string a, b; // 입력
    string ca, cb; // 순서가 바뀌는 수

    cin >> a >> b;

    for(int i=2; i>=0; i--){
        ca += a[i];
        cb += b[i];
    } // 거꾸로 출력

    cout << max(ca, cb) << '\n'; // 두 수 중에 더 큰 수 출력
    return 0;
}