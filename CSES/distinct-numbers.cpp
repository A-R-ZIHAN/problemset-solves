#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin >> n;
  vector<int> array(n);
  int ans = 1;
  for (int i = 0; i < n; i++){
    cin >> array[i];
  }
  sort(array.begin(), array.end());

  for (int i = 1; i < n; i ++){
    ans += (array[i] != array[i - 1]);
  }
  cout << ans << endl;
}