#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int arr[1000];
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n); //오름차순 정렬
    for(int i=0; i<n; i++){
        cout << arr[i] << '\n';    
    }
    return 0;
}
