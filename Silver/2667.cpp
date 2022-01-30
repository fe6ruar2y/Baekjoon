#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 25
using namespace std;

int n; // 지도의 크기
int map[MAX][MAX];
bool visit [MAX][MAX];
int cnt;
int map_x[4] = {1, -1, 0, 0}; // 상하좌우 설정
int map_y[4] = {0, 0, 1, -1}; // 상하좌우 설정

vector<int>v;

void DFS(int x, int y){
    cnt++;
    visit[x][y] = true;

    for(int i=0; i<4; i++){
        int next_x = x + map_x[i];
        int next_y = y + map_y[i];
        
        if(next_x < 0 || next_x >= n || next_y < 0 || next_y >= n){
            continue;
        } // 범위 밖에 있다면 건너뛰기

        if(map[next_x][next_y] == 1 && visit[next_x][next_y] == false){
            DFS(next_x, next_y);
        } // 범위 내에 있다면 DFS 다시 하도록
    }
}

int main(){
    cin >> n;

    for(int i=0; i<n; i++){
        string temp;
        cin >> temp;
        for(int j=0; j<n; j++){
            map[i][j] = temp[j] - '0';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(map[i][j] == 1 && visit[i][j] == false){
                cnt = 0;
                DFS(i, j);
                v.push_back(cnt);
            } // 범위 내에 있다면 카운트 초기화 후 깊이 우선 탐색 재귀, push_back으로 카운트 추가
        }
    }

    sort(v.begin(), v.end()); // 오름차순 정렬
    cout << v.size() << '\n';
    
    for(int i=0; i<v.size(); i++){ // 벡터 크기 나열
        cout << v[i] << '\n';
    }
    return 0;
}
