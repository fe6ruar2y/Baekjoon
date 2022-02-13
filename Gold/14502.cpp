#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 8
using namespace std;

int n, m;
int map[MAX][MAX];
int visit[MAX][MAX];
int result = 0;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

// 지도 복사
void map_copy(int(*a)[MAX], int(*b)[MAX]){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j] = b[i][j];
        }
    }
} 

void BFS(){
    int spread[MAX][MAX]; // 3개 벽을 세우고 난 뒤 바이러스가 퍼진 연구소
    map_copy(spread, visit);
    queue<pair<int,int>> q;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // 바이러스가 있으면 큐 push
            if(spread[i][j] == 2){
                q.push(make_pair(i, j));
            }
        }
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx>=0 && nx<n && ny>=0 && ny<m){
                // 0이 있다면 바이러스에 감염되어 2로 표시
                // 바이러스로 감염되었으니까 큐 push
                if(spread[nx][ny] == 0){
                    spread[nx][ny] = 2;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }

    // 감염되지 않은 부분
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(spread[i][j] == 0){
                cnt += 1;
            }
        }
        result = max(result, cnt);
    }
}

void wall(int cnt){
    // 3개의 벽이 세워졌을 때 바이러스 확인
    if(cnt == 3){
        BFS();
        return;
    }

    // 벽 세우기
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(visit[i][j] == 0){
                visit[i][j] = 1;
                wall(cnt+1);
                visit[i][j] = 0; // 기존의 1을 0으로 바꿔줌
            }
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
        }
    }

    // 0인 부분은 다 벽을 세워야함
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(map[i][j] == 0){
                map_copy(visit, map);
                visit[i][j] = 1;
                wall(1);
                visit[i][j] = 0;
            }
        }
    }
    cout << result << '\n';
}