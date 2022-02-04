#include <iostream>
#include <queue>
#include <cstring>
#define MAX 1001
using namespace std;

struct tomato {
    int y, x;
};

queue<tomato> q;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int m, n, result = 0; // 가로, 세로, 결과
int map[MAX][MAX];

bool inside(int ny, int nx){
    return(nx >= 0 && nx < m && ny >=0 && ny < n);
}

void BFS(){
    while(!q.empty()){
        // 익은 토마토 꺼내기(현재 원소)
        int y = q.front().y;
        int x = q.front().x;
        q.pop();

        // 해당 위치의 주변 확인
        for(int i=0; i<4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];

            // 지도를 벗어나지 않고, 안익은 토마토면 너비우선탐색 실행 = 익게 만들기
            if(inside(ny, nx) == 1 && map[ny][nx] == 0){
                map[ny][nx] = map[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
}

int main(){
    cin >> m >> n;

    // 지도 정보 입력
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> map[i][j];
            if(map[i][j] == 1){
                q.push({i, j});
            }
        }
    }

    // 지도 입력 정보로 너비우선탐색 실행
    BFS();

    // 날짜 계산
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // 지도에 안익은 토마토가 있을 경우
            if(map[i][j] == 0){
                cout << -1 << '\n';
                return 0;
            }
            // 토마토가 다 익었다면 며칠 걸렸는지 출력
            if(result < map[i][j]){
                result = map[i][j];
            }
        }
    }
    cout << result -1 << '\n';
    return 0;
}
