#include <iostream>
using namespace std;

int main(){
    int n;
    int count=0;
    cin >> n;

    while(n%3!=0 || n>=15){
        n=n-5;
        count++;
        if(n<0){
        	cout<<"-1"<<'\n';
        	return 0;
        }
    }
    count+=n/3;
    cout<<count<<'\n';

    return 0;
}