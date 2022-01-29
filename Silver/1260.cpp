#include <iostream>
#include <queue>
#define MAX 1001
using namespace std;

int n,m,v; // 정점 개수, 간점 개수, 정점의 번호
int map[MAX][MAX];
bool visited[MAX]; // 정점 방문 여부
queue<int> q;

void pass(){
    for(int i=1; i<=n; i++){
        visited[i] = 0;
    }
}

void DFS(int v){ // 깊이 우선 탐색
    visited[v] = true;
    cout << v << '\n';
    
    for(int i=1; i<=n; i++){
        if(map[v][i] == 1 && visited[i] == 0){ // 현재 정점과 연결되어 있고 방문하지 않았을 경우
            DFS(i);
        }
    }
}

void BFS(int v){ // 너비 우선 탐색
    q.push(v);
    visited[v] = true;
    cout << v << '\n';

    while(!q.empty()){
        v = q.front();
        q.pop();

        for(int j=1; j<=n; j++){
            if(map[v][j] == 1 && visited[j] == 0){ // 현재 정점과 연결되어 있고 방문하지 않았을 경우
                q.push(j);
                visited[j] = true;
                cout << j << '\n';
            }
        }
    }
}

int main(){
    cin >> n >> m >> v;

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }

    pass();
    DFS(v);
    cout << '\n';

    pass();
    BFS(v);
    return 0;
}