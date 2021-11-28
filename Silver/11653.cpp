#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    if(n == 1){
        return 0;
    } // n이 1이면 아무것도 출력 안 함

    for(int i=2; i<=n; i++){
        while(n % i == 0){
            cout << i << '\n';
            n /= i;
        } 
    }
    return 0;
}