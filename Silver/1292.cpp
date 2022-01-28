#include <iostream>
using namespace std;

int main(){
    int arr[1001] = {};
    int a,b = 0;
    int result = 0;
    int temp = 1;

    for(int i=1;i<=1000;i++){
        for(int j=1; j<=i; j++){
            arr[temp]=i;
            if(temp>1000){
                break;
            }
            temp++;
        }
    }
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        result += arr[i];
    }
    cout << result << '\n';
    return 0;
}