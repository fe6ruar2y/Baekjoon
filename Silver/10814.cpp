#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;

    pair<int, string> member;
    vector<pair<int, string>> enter;

    for(int i=0; i<n; i++){
        cin >> member.first >> member.second;
        enter.push_back(member);
    }

    stable_sort(enter.begin(), enter.end(), compare);
    for(int i=0; i<n; i++){
        cout << enter[i].first << ' ' << enter[i].second << '\n';
    }
    return 0;
}
