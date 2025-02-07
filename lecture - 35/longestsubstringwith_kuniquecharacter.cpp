#include<iostream>
using namespace std;
int main(){
    string s = "aabc      ";
    int k = 3, i = 0, j = 0,max_len = 0,uniqcnt = 0;
    unordered_map<char,int> freqmap;
    while(j < n ){
        freqmap[s[j]]++;
        if(freqmap[s[j]] == 1){
            uniqcnt++;
        }
        if(uniqcnt > k ){
            while(uniqcnt > k){
               if(freqmap[s[i]] == 0){
                uniqcnt--;
               }
               i++;
            }
        }
        if(uniqcnt == k ){
            max_len = max(max_len , j - 1 + 1);
        }
        j++;
    }

    return 0;
}

