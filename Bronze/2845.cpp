#include <iostream>
using namespace std;

int main(){
    int people, room; // 사람 수, 파티의 넓이
    int news[5] = {}; // 신문

    cin >> people >> room;
	
	for(int i=0; i<5; i++){
		cin >> news[i];
		cout << news[i] - (people * room) << ' ';
	}
	return 0;
}