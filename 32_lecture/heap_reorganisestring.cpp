#include<iostream>
using namespace std;
string reorganise(string str){
    int freq[26] = { 0};
    for(char ch : str){
        int idx = ch - 'a';
        freq[inx]++;
    }
    priorityqueue<pair<int,char>> maxheap;
    for(int i 0 : i < 26 ; i++){
        if(freq[i] > 0){
            maxheap.push({freq[i]})
        }
    }
}
int main()
{
    return 0;
}