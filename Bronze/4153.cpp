#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int temp = 0;
    cin >> a >> b >> c;

    while(a + b + c != 0){
        	
        if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}

		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}
	    // a b c 순서 바뀌어도 피타고라스 식에 맞도록 해주기
        
        if((c*c) == (a*a) + (b*b)){
            cout << "right" << '\n';
        }
        else{
            cout << "wrong" << '\n';
        }
        cin >> a >> b >> c;
    }
    return 0;
}
