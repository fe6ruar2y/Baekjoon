#include <iostream>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int arr[4] = {w-x, x, h-y, y}; // 배열 넣어서 크기 비교 -> 최솟값 구하기
    int min = arr[0];

    for(int i=0; i < 4; i++){
        if(min>arr[i]){
            min=arr[i];
        }
      
    }  
    cout << min << '\n';
    return 0;   
}
