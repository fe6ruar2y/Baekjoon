#include <iostream>
#include <queue>
#define MAX 100
using namespace std;

int map[MAX][MAX];
bool visit[MAX][MAX];
int path[MAX][MAX];
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};
int n, m;

queue<pair<int, int>> q;

void BFS(int y, int x){
	path[y][x] = 1;
    visit[y][x] = true;
    q.push(make_pair(y, x));

    while(!q.empty()){
        y = q.front().first;
        x = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            if(ny<0 || nx<0 || ny>=n || nx>=m){
                continue;
            }
            if(map[ny][nx] == 1 && visit[ny][nx] == 0){
                visit[ny][nx] = true;
                q.push(make_pair(ny, nx));
                path[ny][nx] = path[y][x] + 1;
            }
        }
    }
}

int main(){
    cin >> n >> m;

    string number;
    for(int i=0; i<n; i++){
        cin >> number;
        for(int j=0; j<m; j++){
            map[i][j] = number[j] - '0';
        }
    }

    BFS(0, 0);
    cout << path[n-1][m-1] << '\n';
    return 0;
}