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
            cout << i << '\n';
            cout << a * (b/i) << '\n';
            break;
        }
    }
    return 0;
}