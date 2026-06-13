#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int n , m;
  cin >> n >> m;
  int y = n ^ m;
  cout << y;

  cout << __builtin_popcount(y);
;
return 0;
}