#include <iostream>
#include <math.h>
#define pi 3.1415926535897932
using namespace std;

int main(){

    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int r;
    double uclide; //유클리드 결과
    double taxi; //택시 결과

    cin >> r;

    uclide = r*r*pi;
    taxi = 2*r*r;
    
    cout << fixed;
    cout.precision(6);
    cout << uclide << '\n';
    cout << taxi << '\n';
    return 0;
}