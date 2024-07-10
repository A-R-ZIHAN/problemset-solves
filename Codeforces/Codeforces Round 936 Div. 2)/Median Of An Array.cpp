#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0; i < t; i++){
        int ans = 1;
        cin >> n;
        vector<int> array(n);
        for(int j = 0; j < n; j++){
            cin >> array[j];
        }
        
        sort (array.begin(), array.end());

        int median = array[(n-1)/2];

        int medindex = (n-1)/2;

        for(int i = medindex+1;i<n;i++){
            cout << array[i];
        }
        cout<< ans << endl;

    }
}