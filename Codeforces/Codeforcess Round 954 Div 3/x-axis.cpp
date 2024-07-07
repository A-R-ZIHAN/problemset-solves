#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  int n;
  cin >> n;
  int array[3];
  int x, y, z;
  for(int i = 0; i < n; i++){
    for(int i = 0; i < 3; i++){
      cin >> array[i];
    }
    x = abs(array[0] - array[1]) + abs(array[1] - array[1]) + abs(array[2] - array[1]);
    y = abs(array[0] - array[2]) + abs(array[1] - array[2]) + abs(array[2] - array[2]);
    z = abs(array[0] - array[0]) + abs(array[1] - array[0]) + abs(array[2] - array[0]);

    if(x <= y && x <= z){
      cout << x << endl;
    }else if(y <= x && y<=z){
      cout << y << endl;
    }else{
      cout << z << endl;
    }
  }

  
  return 0;
}