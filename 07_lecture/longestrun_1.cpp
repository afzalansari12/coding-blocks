#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 10;
    int cnt = 0;
    int maxsofar = 0;

 int x = ceil(log2(n +1));

    for(int k = 0; k < x;  k++){

        if(n & 1){
          cnt++;
           n = n >> 1;
        }else{
           cnt =0;
           n = n>> 1;

        }
        maxsofar = max(maxsofar, cnt);

    }
    cout << maxsofar;
return 0;
}