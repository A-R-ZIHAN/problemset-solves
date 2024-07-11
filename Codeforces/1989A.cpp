#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t,x,y;
    cin >> t;
    for(int i = 0; i < t; i++){

        cin >> x >> y;
        if(y >= -1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
 
    
    return 0;
}