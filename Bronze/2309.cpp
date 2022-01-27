#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n = 9;
    int nanjaeng[9]={}; // 난쟁이들 키
    int sum = 0; // 난쟁이들 키의 합
    for(int i=0; i<n; i++){
        cin >> nanjaeng[i];
        sum += nanjaeng[i];
    }

    sort(nanjaeng, nanjaeng+n);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(sum - nanjaeng[i] - nanjaeng[j] == 100){ // 맨 뒤 두 요소를 뺀 합이 100일 때
                for(int k=0; k<n; k++){
                    if(i == k || j == k)
                    continue; // 같으면 아무거나 출력 가능
                    cout << nanjaeng[k] << '\n';
                } 
            return 0;
            } 
        }
    }
    return 0; 
}  
