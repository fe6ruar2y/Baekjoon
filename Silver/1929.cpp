#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int m,n;
    int rt = 0; //제곱근
    cin >> m >> n;

    for(int i=m; i<=n; i++){
        rt = sqrt(i); // sqrt 함수는 받은 변수에 루트를 씌워줌, 루트 i

        if(rt == 1 && i != 1) {
            cout << i << '\n';
            continue;
        } // 1은 소수가 아니기 때문에 제외

        if(i % 2){ // i가 홀수일 경우
            for(int j=2; j<=rt; j++){
                if(!(i%j)){
                    break;
                } // i를 j로 나누어 떨어지면 소수가 아님
                if(j == rt){
                    cout << i << '\n';
                } // 
            }
        }
    }
    return 0;
}