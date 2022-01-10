#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int arr[8001]={};

int main(){
    int n; // 주어지는 갯수
    cin >> n;

    int sum = 0;
    int index = 0;
    int max = 0;
    vector<int>list;

    for(int i=0; i<n; i++){
        int number;
        cin >> number;
        sum += number; // 합

        if(number <= 0){
            index = -number;
        }
        else{
            index = 4000 + number;
        }
        arr[index]++;

        if(arr[index] > max){
            max = arr[index];
        }

        list.push_back(number); // 마지막 원소 뒤에 원소 삽입
    }

    float avg = sum / (float)n;
    cout << round(avg) << '\n'; // 평균 (소수 첫번째 반올림)

    sort(list.begin(), list.end());
    cout << list[list.size()/2] << '\n'; // 중앙값

    bool flag = false;
    int result = 0;
    for(int i=-4000; i<4001; i++){
        if(i<=0){
            index = -i;
        }
        else{
            index = 4000 + i;
        }

        if(arr[index] == max){
            result = i;

            if(flag){
                break;
            }
            flag = true;
        }
    }
    cout << result << '\n'; // 최빈값

    cout << list[list.size()-1] - list[0] << '\n'; // 범위
}
