#include<iostream>
#include<queue>

using namespace std;
int main(){

    queue<char> q;

   int freqmap[26] = {0};
 
    char ch;
    
    while(true){
        cin >> ch;
        if(ch =='.') break;

    freqmap[ch -'a']++;

    if(freqmap[ch-'a']==1){
        q.push(ch);
    }

    while(!q.empty() and freqmap[q.front()-'a'] > 1){
        q.pop();
    }
     if(q.empty()){
        cout << -1 << " ";
     }

     else{
    cout << q.front()  << " ";
     }

    }

return 0;
}