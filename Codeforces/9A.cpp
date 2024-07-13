#include <bits/stdc++.h>
using namespace std;

int main() {
    int y,w;
    cin >> y >> w;
    int numerator = (6-(max(y,w)-1));
    if(6%numerator == 0 ){
        cout << 1 << "/" << 6/numerator;
    }else if(6%numerator != 0 && numerator == 4){
        cout << "2/3" << endl;
    }
    else{
        cout << numerator << "/" << 6;
     }
    return 0;
}