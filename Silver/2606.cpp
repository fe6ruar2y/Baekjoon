#include <iostream>
#include <vector>
using namespace std;

vector<int> computer[101];
bool virus[101];
int cnt = 0;

void dfs(int x){
    virus[x] = true;
    
    for(int i=0; i<computer[x].size(); i++){
        int y = computer[x][i];

        if(!virus[y]){
            dfs(y);
            cnt++;
        }
    }
}

int main(){
    int c,n; // 컴퓨터의 갯수, 연결된 갯수
    cin >> c >> n;

    for(int i=0; i<n; i++){
        int a,b; // 연결된 컴퓨터의 번호
        cin >> a >> b;
        computer[a].push_back(b);
        computer[b].push_back(a);
    } // 서로 연결해줌
    
    dfs(1);
    cout << cnt << '\n';
    return 0;
}