#include <iostream>
using namespace std;

int main(){
    int song, average; // 노래 갯수, 평균값
    int result = 0;

    cin >> song >> average;
    result = song * (average - 1) + 1;
    
    cout << result << '\n';
    return 0;
}