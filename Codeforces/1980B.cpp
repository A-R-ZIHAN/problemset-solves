#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    int t,n,f,k;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> f >> k;
        int lastcube = 0;
        vector <int> cubes(n);
        for(int j = 0; j < n; j++){
            cin >> cubes[j];
        }
        int fav = cubes[f-1];

        sort(cubes.begin(), cubes.end(),greater<int>());
 
        
        if(k == n || cubes[k] < fav){
                cout << "YES" << endl;
        }
        else if( cubes[k] == fav && cubes[k-1] == fav){
            cout << "MAYBE" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
    
    return 0;
}