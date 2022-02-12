#include <iostream>
#define MAX 1001
using namespace std;

bool map[MAX][MAX];
bool visit[MAX];
int n,m,result;

void DFS(int x){
    visit[x] = true;

    for(int i=1; i<=n; i++){
        if(map[x][i] && !visit[i]){
            DFS(i);
        }
    }
}

int main(){
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;

        map[a][b] = true;
        map[b][a] = true;
    }

    for(int i=1; i<=n; i++){
        if(!visit[i]){
            result++;
            DFS(i);
        }
    }

	cout << result << '\n';
    return 0;
}