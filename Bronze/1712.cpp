#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int result;

    cin >> a >> b >> c;
    result = a / (c - b) + 1;
    if(b >= c){
        cout << "-1" << '\n';
    }
    else{
        cout << result << '\n';
    }
    return 0;
}