#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n ,k;

    cin >> n;
    cin >> k;

    string s = "";
    cin >> s;

   vector<int> freq(26,0);
    for(int i = 0; i < s.size(); i++){
        freq[s[i]-'a']++;
    }
   if(freq.size()== k){
    cout << "YES";
   }else{
    cout << "NO";
   }
return 0;
}