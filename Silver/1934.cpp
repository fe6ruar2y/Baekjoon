#include <iostream>
using namespace std;

int main(){
    int t; //테스트 케이스
    int a,b;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> a >> b;
        int min = 0;
        if(a>=b){
            min = b;
        }
        else{
            min = a;
        }
        for(int j=min; j>0; j--){
            if(a%j == 0 && b%j == 0){
                cout << a * (b/j) << '\n';
                break;
            }
        }
    }
    return 0;
}