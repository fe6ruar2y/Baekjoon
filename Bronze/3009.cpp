#include <iostream>
using namespace std;

int main(){
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    if(x1 == x2){
        cout << x3 << ' ';
    }
    else if(x2 == x3){
        cout << x1 << ' ';
    }
    else{
        cout << x2 << ' ';
    } // x1 x2 x3 중에서 다른 숫자 하나를 언급해주기

    if(y1 == y2){
        cout << y3 << ' ';
    }
    else if(y2 == y3){
        cout << y1 << ' ';
    }
    else{
        cout << y2 << ' ';
    } //  y1 y2 y3 중에서 다른 숫자 하나를 언급해주기
    return 0;
}
