#include <bits/stdc++.h>
using namespace std;

int main() {
    int limak, bob;
    cin >> limak >> bob ;

    int integer=0;
    while(bob >= limak){
        bob = bob*2;
        limak = limak*3;
        integer++;
    }  

    cout << integer;

    
    
    return 0;
}