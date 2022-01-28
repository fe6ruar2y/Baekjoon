#include <iostream>
using namespace std;

int main(){
    int a,b;
    int min =0;
    cin >> a >> b;

    if(a>=b){
        min = b;
    }
    else {
        min =a;
    }
    for(int i=min; i>0; i--){
        if(a%i == 0 && b%i == 0){
            cout << i << '\n'; // a와 b의 나머지가 0이 되는 수가 최대공약수
            cout << a * (b/i) << '\n'; // 최대공약수를 구한 후 최소공배수 구해주기
            break;
        }
    }
    return 0;
}
