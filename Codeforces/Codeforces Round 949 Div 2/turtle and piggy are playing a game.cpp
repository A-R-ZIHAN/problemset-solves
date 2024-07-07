#include<bits/stdc++.h>
using namespace std;


int getMaxScore(int r){
    int maxScore = 0;
  while(r > 1){
    r /= 2;
    maxScore++;
  }
  return maxScore;
}

int main()
{
  int t,l,r;
  cin >> t;
  while(t--){
    cin >> l >> r;
    cout << getMaxScore(r) << endl;
  }

}