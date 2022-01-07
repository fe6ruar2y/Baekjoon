#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int number = 0; // 테스트 케이스
    int result = 0;
    int count = 0; // 나머지 카운트

    while (1){
        cin >> number;
        if(!number){
            break;
        }

        for(int i= number+1; i<= 2*number; i++){
            result = sqrt(i); // sqrt는 양의 제곱근을 반환하는 함수
            if(result == 1 && i != 1){
                count++;
                continue;
            } // 2,3 일 경우
            if(i%2){
                for(int j=2; j<= result; j++){
                    if(!(i%j)){
                        break;
                    }
                    if(j == result){
                        count++;
                    }
                }
            } // 홀수일 경우
        }
    }
    cout << count << '\n';
    count = 0;
    return 0;
}