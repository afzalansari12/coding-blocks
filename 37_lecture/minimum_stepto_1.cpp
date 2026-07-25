#include<iostream>
#include<algorithm>

using namespace std;

int f(int n){
    if (n == 1){
        return 0;
        }

    int ans = f(n - 1);

    if(n % 2 == 0)
        ans = min(ans, f(n / 2));

    if(n % 3 == 0)
        ans = min(ans, f(n / 3));

    return 1 + ans;
}
int main(){
    int n;
    cin >> n;
  cout <<  f(n) << endl;
return 0;
}