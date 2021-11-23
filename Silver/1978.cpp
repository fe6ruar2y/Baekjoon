#include <iostream>
using namespace std;

int main(){
    int n = 0; // 입력할 갯수 선언
    int a = 0; // 입력할 갯수 받기
    int count = 0; // 나머지 갯수
    int result = 0; // 결과
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;

        for(int j=1; j<= a; j++){
            if(a%j == 0){
                count++;
            }
        }
        if(count == 2){
            result++;
        } // 나머지 갯수가 2개면 소수니까 result에 추가
        count = 0;
    }
    cout << result << '\n';
    return 0;
}
