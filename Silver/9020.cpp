#include <iostream>
#include <cmath>
using namespace std;

bool prime(int i){
    int result;
    result = sqrt(i);
    if(result == 1 && i != 1){
        return true;
    } // 2,3 일 경우
    if(i%2){
        for(int j=2; j<= result; j++){
            if(!(i%j)){
                return false;
            }
            if(j == result){
                return true;
            }
        } // 홀수일 경우
    }
} // 소수인지 아닌지 판별하는 함수 선언

int main(){
    int t; //테스트 케이스
    cin >> t;

    for(int i=0; i<t; i++){
        int number;
        cin >> number;

        for(int j= number/2; j>=2; j--){
            if(prime(j) && prime(number - j)){
                cout << j << " " << number - j << '\n';
                break;
            }
        } // number를 반으로 나눠서 소수인지 아닌지 구분
    }
    return 0;
}

