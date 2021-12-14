#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n; // 테스트 케이스
    int number; // 전화번호 갯수
    string phone[10500] = {}; // 전화번호
    int count = 0; // 겹치는 경우 카운트
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> number;
        count = 0;
        for(int j=0; j<number; j++){
        	 //cout << "베럴댄유얼 머시기" << '\n';
            cin >> phone[j];
        }
        sort(phone, phone+number); //오름차순 정렬
        for(int j=0; j<number-1; j++){
            for(int k=j+1; k<number; k++){
                if(phone[k].substr(0, phone[j].length()) == phone[j]){
                    count++;
                }
            }

        }            
        if(count >= 1){
            cout << "NO" << '\n';
        }
		else if(count == 0){
			cout << "YES" << '\n';
		}
    }
	return 0;
}