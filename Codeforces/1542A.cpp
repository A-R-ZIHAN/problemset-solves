#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int evenCount = 0, oddCount = 0;

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        if (evenCount == n) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}