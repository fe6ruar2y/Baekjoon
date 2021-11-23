#include <iostream>
using namespace std;

int main(){
    int m,n; // 입력받을 수
    int count = 0; //나머지 갯수
    int result = 0;
    int sum = 0; // 소수의 합
    int min = 0; // 최솟값
    cin >> m;
    cin >> n;

    for(int i=m; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            if(i%j == 0){
                count++;
            }
        }
        if(count == 2){
            result += i;
        }
        if(count == 2 && min == 0){
        	min = i;
        }
        count = 0;
    }        
    	if(result == 0){
            cout << "-1" << '\n';
            return 0;
        }        
	cout << result << '\n';
	cout << min << '\n';
    return 0;   
}