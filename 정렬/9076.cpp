#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; // 테스트 케이스
    int score[5] = {}; // 다섯 심판들의 점수
    int sum = 0; 
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin >> score[j];
        }
	sort(score, score+5); // 오름차순 정렬
    if(score[3] - score[1] >= 4){
        cout << "KIN" << '\n';
    }
    else {
        sum = score[1] + score[2] + score[3];
        cout << sum << '\n';
        }
    }
    return 0;
}