#include <iostream>
#include <vector>
#define MAX 100001
using namespace std;

int n;
int arr[MAX];
bool visit[MAX];
vector<int> tree[MAX];

void DFS(int x){
    visit[x] = true;
    
    for(int i=0; i<tree[x].size(); i++){
        int nx = tree[x][i];
        if(visit[nx] == false){
            arr[nx] = x;
            DFS(nx);
        }
    }
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;

        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    DFS(1);

    // 2번 노드부터 출력
    for(int i=2; i<=n; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}