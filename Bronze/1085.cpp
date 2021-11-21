#include <iostream>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int arr[4] = {w-x, x, h-y, y};
    int min = arr[0];

    for(int i=0; i < 4; i++){
        if(min>arr[i]){
            min=arr[i];
        }
      
    }  
    cout << min << '\n';
    return 0;   
}