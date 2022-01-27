#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n; // 정수 입력

    stack<int> stack; // int type의 스택 선언
    string str;

    for(int i = 0; i < n; i++){ 
        cin >> str;

        if(str == "push"){ // 명령어가 push 일 때
            int num;
            cin >> num;
            stack.push(num);
        }
        else if(str == "pop"){ // 명령어가 pop 일 때
            if(!stack.empty()){
                cout << stack.top() << '\n';
                stack.pop();
            }
            else{
                cout<< "-1" << '\n'; // 정수가 없는 경우 -1 출력
            }
        }
        else if(str == "size"){ // 명령어가 size 일 때
            cout << stack.size() << '\n';
        }
        else if(str == "empty"){ // 명령어가 empty 일 때
            if(stack.empty()){
                cout << "1" << '\n'; // 비어있으면 1 출력
            }
            else{
                cout << "0" << '\n'; // 비어있지 않으면 0 출력
            }
        }
        else if(str == "top"){ // 명령어가 top 일 때
            if(!stack.empty()){
                cout << stack.top() << '\n'; // 스택이 비어있지 않으면 맨 위에 수 출력
            }
            else {
                cout << "-1" << '\n'; // 스택이 비어있으면 -1 출력
            }
        }
    }
    return 0;
}
