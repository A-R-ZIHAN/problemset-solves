#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n;
 
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
 
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }
 
        
        int ans = 0;
        sort(a.begin(), a.end());
        for(int i = 0; i < n; i++){
          while(!(a[i] <= b[i])){
            a.pop_back();
            a.push_back(b[i]);
            sort(a.begin(), a.end());
            ans++;
          }
        }
        cout << ans << endl;
        
        
      
    }
 
    return 0;
}