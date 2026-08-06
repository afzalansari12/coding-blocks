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
      string ans = "";
       
     ans += s[0];

for (int i = 1; i < n; i++) {
    if (s[i] != s[i - 1]) {
        ans += s[i];
    }
}

 cout << ans.size() << endl;
    }
return 0;
}