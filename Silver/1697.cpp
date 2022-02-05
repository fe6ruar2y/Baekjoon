#include <iostream>
#include <queue>
#define MAX 100001
using namespace std;

int n, k; // 누나와 동생의 위치
bool visit[MAX];
int field[MAX];
queue<int> q;

void BFS(int x){
    field[x] = 0;
    visit[x] = true;
    q.push(x);

    while(!q.empty()){
        int w = q.front();
        if(w == k) break;
        q.pop();

        if(visit[w+1] == 0 && w+1 >= 0 && w+1 < MAX){
            visit[w+1] = true;
            q.push(w+1);
            field[w+1] = field[w] + 1;
        } //  x+1 이동했을 경우

        if(visit[w-1] == 0 && w-1 >= 0 && w-1 < MAX){
            visit[w-1] = true;
            q.push(w-1);
            field[w-1] = field[w] + 1;
        } // x-1 이동했을 경우

        if(visit[w*2] == 0 && w*2 >= 0 && w*2 < MAX){
            visit[w*2] = true;
            q.push(w*2);
            field[w*2] = field[w] + 1;
        } // x*2 순간이동했을 경우
    }
}

int main(){
    cin >> n >> k;
    BFS(n);
    cout << field[k] << '\n';
    return 0;
}