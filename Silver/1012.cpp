#include <iostream>
using namespace std;
 
const int MAX = 51;
int t, m, n, K; // 테스트 케이스, 가로, 세로, 배추의 갯수
int field[MAX][MAX]; // 밭의 크기
int cabbage[MAX][MAX]; // 배추가 위치한 곳
int dy[] = {0,0,-1,1};
int dx[] = {-1,1,0,0};
 
 // 초기화
void reset() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            field[i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cabbage[i][j] = 0;
        }
    }
} 

// 깊이우선탐색
void DFS(int y, int x) {
    cabbage[y][x] = 1;
 
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
 
        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
            continue;
        
        if (field[ny][nx] == 1 && cabbage[ny][nx] == 0) {
            DFS(ny, nx);
        }
    }
}
 
int main() {
    cin >> t;
 
    while (t--) {
        cin >> m >> n >> k;
 
        reset();
 
        while (K--) {
            int x, y;
            cin >> x >> y;
            map[y][x] = 1;
        }
 
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (field[i][j] == 1 && cabbage[i][j] == 0) {
                    DFS(i, j);
                    cnt++;
                }
            }
        }
 
        cout << cnt << '\n';
    }
 
}
