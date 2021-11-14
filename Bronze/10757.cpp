#include <iostream>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string a, b, result;
    cin >> a >> b;

    if(a.size() > b.size()){
        string c;
        for(int i = 0; i < a.size() - b.size(); i++){
            c += '0';
            b = c + b;
        } 
    } 
    else{
        string c;
        for(int i = 0; i < b.size() - a.size(); i++){
            c += '0';
            a = c + a;
        }
    }// 수의 자릿수가 다를 때 같게 만들어줌 ( 9999 + 1 -> 9999 + 0001 )

    int carry = 0; // 각 자릿수에서 더할 때 올림수
    while(a.size() != 0 && b.size() != 0){
        int aback = a.back() - '0'; // 문자열 맨 뒤에 문자를 숫자로 만들어줌
        int bback = b.back() - '0'; // 문자열 맨 뒤에 문자를 숫자로 만들어줌
        int remain = (carry + aback + bback) % 10; // 더해서 남는 수 -> 남김수
        carry = (carry + aback + bback) / 10; // 더해서 올리는 수 -> 올림수
        result = (char)(remain + '0') + result;
        a.pop_back();
        b.pop_back();
    }
    if(carry){
        result = (char)(carry + '0') + result;
    } // 마지막까지 올림수가 남을 때 결과에 더해주어야함        
    cout << result << endl;
    return 0;
}