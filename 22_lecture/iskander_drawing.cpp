#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int maxcnt = 0;
    for(int i = 0; i < n; i++){

        if(s[i]!='*'){
            cnt++;
        }else{
            cnt = 0;
        }
   maxcnt = max(maxcnt, cnt);
}
 cout << (maxcnt+1)/2 << endl;
    }
return 0;
}



