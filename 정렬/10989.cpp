#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n; // 테스트 케이스
    int number[10001] = {};
    cin >> n;

    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        number[input]++;
    }

    for(int i=1; i<10001; i++){
        if(number[i]){
            for(int j=0; j<number[i]; j++){
                cout << i << '\n';
            }
        }
    }
    return 0;
}