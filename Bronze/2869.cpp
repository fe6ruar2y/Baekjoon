#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    double a, b, v;
    double count;
    cin >> a >> b >> v;

    count = (v - b) / (a - b);

    if(count - (int)count != 0) {
        count = (int)count + 1;
    }

    cout << (int)count << '\n';
    return 0;
}