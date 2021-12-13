#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; // 단어 받는 갯수
    string temp;
    string words[50] = {};
    int count = 0; // 접두사 갯수
    cin  >> n;

    for(int i=0; i<n; i++){
        cin >> words[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){ 
            if(words[i].length() > words[j].length()){
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            } 
        } 
    } // 오름차순 정렬

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(words[j].substr(0, words[i].length()) == words[i]){
                count++;
                break;
            }
        }
    }
    cout << n - count << '\n';
    return 0;
}
