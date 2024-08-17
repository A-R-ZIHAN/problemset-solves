#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int integer = 0;
    vector<char> array(t);
    for(int i = 0; i < t; i++){
        cin >> array[i];
    }
    for(int i = 0; i < t; i++){
        if(array[i] == array[i+1]){
            integer++;
        }
    }

    cout << integer;

    
    
    return 0;
}