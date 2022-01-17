#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    int result = 0; // 결과

    for(int i=0; i<5; i++){
        cin >> n;
        sum += n * n;
    }
    result = sum % 10;
    cout << result << '\n';
    return 0;
}