#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n, answer;
        cin >> n;
        vector <int> array(n);
        for(int j = 0; j < n; j++) {
            cin >> array[j];
        }


        int mini = max(array[0],array[1]);
        
        for(int j = 1; j < n-1 ; j++){
            mini = min(mini,max(array[j],array[j+1]));
        }

        cout << mini-1 << endl;


    }
    
    return 0;
}