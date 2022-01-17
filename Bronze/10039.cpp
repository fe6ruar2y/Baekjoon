#include <iostream>
#define STUDENT 5 // 학생 수
#define PASS 40 // 점수 제한
using namespace std;

int main(){
    int score[STUDENT];
    int sum = 0; // 총합
    int average = 0; // 평균

    for(int i =0; i<STUDENT; i++){
        cin >> score[i];
    } // 점수 입력

    for(int i=0; i<STUDENT; i++){
        if(score[i]<PASS){
            score[i] = 40;
        } // 40점 미만이면 40점 출력
        sum += score[i];
    }
    average = sum / STUDENT;
    cout << average << '\n';
    return 0;
}
