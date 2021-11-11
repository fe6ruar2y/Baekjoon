#include <iostream>
using namespace std;

int main(){
    int n,x,y,m; //케이스 개수, x , y, y-x
    int input = 1; //입력받는 개수
    int count = 0; //출력 값
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>x>>y;
        m=y-x;
        count=0;
        input=1;
        while(m>0){
            m-=input;
            count++;
            if(m<=0){
                break;
            }
            m-=input;
            count++;
            input++;
        }
        cout<<count<<'\n';
    }
    return 0;
}