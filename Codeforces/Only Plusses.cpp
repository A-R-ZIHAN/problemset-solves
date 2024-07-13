#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        vector<int> array(3);
        
        for(int j = 0; j < 3; j++) {
            cin >> array[j];
        }


        sort(array.begin(), array.end());
        int a = array[0];
        int b = array[1];
        int c = array[2];

        int increases = 5;
        

        while (increases > 0) {
            if (a <= b && a <= c) {
                a++;
            } else if (b <= a && b <= c) {
                b++;
            } else {
                c++;
            }
            increases--;
        }

        int ans = a * b * c;
        cout << ans << endl;
    }
    
    return 0;
}