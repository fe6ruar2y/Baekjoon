#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int n,k; // n은 정수의 갯수, k는 스택 받을 수
    cin >> n;

    stack<int> stack; //int type 스택 선언
    string str;

    for(int i = 0; i < n; i++){
        cin >> k;
        if(k != 0){
            stack.push(k); // k가 0이 아니면 스택 쌓기
        }
        else{
            stack.pop(); // k가 0이면 스택 삭제
        }
    }

    int sum = 0;
    int size = stack.size();
    for(int i = 0; i < size; i++){ //스택 요소 합 구하기
        sum += stack.top();
        stack.pop();
    }
    
    cout << sum << '\n';
    return 0;

}