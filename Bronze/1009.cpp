#include <iostream>
using namespace std;

int main(){
    int t; // 테스트 케이스
    int a,b,num;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> a >> b;
        num = 1;
        if(a%10 == 0){
            cout << 10 << '\n';
        }
        else{
                for(int j=0; j<((b+3)%4)+1 ; j++){
                    num *= (a%10);
                }
                cout << num%10 << '\n';    
        }
    }
    return 0;
}