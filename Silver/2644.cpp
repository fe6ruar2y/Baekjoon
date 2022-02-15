#include <iostream>
#include <queue>
#define MAX 101
using namespace std;

int n; // 전체
int a, b; // 관계를 알고 싶은 두 번호
int m; // 전체 노드 수

int arr[MAX][MAX];
bool visit[MAX];
int relation[MAX];
queue<int> q;

void BFS(int x){
    q.push(x);
    visit[x] = true;

    while(!q.empty()){
        x = q.front();
        q.pop();

        for(int i=1; i<=n; i++){
            if(arr[x][i] == 1 && visit[i] == 0){
                q.push(i);
                visit[i] = true;
                relation[i] = relation[x] + 1;
            }
        }
    }
}

int main(){
    cin >> n;
    cin >> a >> b;
    cin >> m;

    while(m--){
        int x, y;
        cin >> x >> y;

        arr[x][y] = 1;
        arr[y][x] = 1;
    }

    BFS(a);

    // 만약 관계가 이어지지 않았다면 -1 출력
    if(relation[b] == 0){
        cout << -1 << '\n';
    }
    else{
        cout << relation[b] << '\n';
    }
    return 0;
}