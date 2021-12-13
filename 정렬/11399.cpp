#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n; // 사람 수
    int time[1000] = {}; // 인출하는데 걸리는 시간 받는 배열
    int sum = 0;// 인출하는데 걸리는 각 사람의 시간
    int result = 0; // 최솟값
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> time[i];
    }

    sort(time,time+n);
    for(int i=0; i<n; i++){
        sum += time[i];
        result += sum;
    }
	cout << result << '\n';
    return 0;
}