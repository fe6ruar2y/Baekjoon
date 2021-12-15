#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n; // 테스트 케이스
    int number[1000001] = {};
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> number[i];
    }

    sort(number, number+n); // 오름차순 정렬
    for(int i=0; i<n; i++){
        cout << number[i] << '\n';
    }
    return 0;
}
