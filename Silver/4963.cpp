#include <iostream>
#define MAX 50
using namespace std;

int map[MAX][MAX];
bool land[MAX][MAX];
int w, h;
int dy[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, -1, 1};

void reset(){
        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                map[i][j] = 0;
                land[i][j] = 0;
        }
    }
}

void DFS(int y, int x){
    land[y][x] = true;

    for(int i=0; i<8; i++){
        int ny = y + dy[i];
        int nx = x + dx[i];

        if(nx<0 || ny<0 || nx>=w || ny>=h){
            continue;
        }
        if(map[ny][nx] == 1 && land[ny][nx] == 0){
            DFS(ny, nx);
        }
    }
}

int main(){
    while(true){
        reset();

        cin >> w >> h;

        if(w == 0 && h == 0){
            break;
        } // 0 0 입력 시 실행 종료

        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cin >> map[i][j];
            }
        }

        int result = 0;
        
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(map[i][j] == 1 && land[i][j] == 0){
                    DFS(i, j);
                    result++;
                }
            }
        }
        
        cout << result << '\n';
    }
    return 0;
}