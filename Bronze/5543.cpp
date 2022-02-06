#include <iostream>
using namespace std;

int main(){
    int burger[3];
    int drink[2];
    int cheap_b = 2001;
    int cheap_d = 2001;

    for(int i=0; i<3; i++){
        cin >> burger[i];
        if(burger[i] < cheap_b){
            cheap_b = burger[i];
        }
    }

    for(int i=0; i<2; i++){
        cin >> drink[i];
        if(drink[i] < cheap_d){
            cheap_d = drink[i];
        }
    }

    cout << cheap_b + cheap_d - 50 << '\n';
    return 0;
}