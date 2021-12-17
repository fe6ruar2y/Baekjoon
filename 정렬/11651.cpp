#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int>> point(n, vector<int>(2,0));
    for(int i=0; i<n; i++){
        cin >> point[i][1];
        cin >> point[i][0];
    }

    sort(point.begin(), point.end());
    for(int i=0; i<point.size(); i++){
        cout << point[i][1] << " " << point[i][0] << '\n';
    }
    return 0;
}