#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
bool canplacecows(int c, int n, int pos[],int m){
    int numofcowsplaced = 1;
    int prevcowpos = pos[0];
     for(int i = 1; i < n ; i++){
        if(pos[i] - prevcowpos >= m){
            numofcowsplaced++;
            prevcowpos = pos[i];
            if(numofcowsplaced == c){
                return true ;
            }

        }
     }
     return false;
}

int largestmindist(int n, int c, int * pos){
    int s = INT_MAX;
    int e = pos[n - 1] - pos[0];
    for(int i = 0; i < n ; i++){
        if(pos[i] - pos[i - 1]< s){
            s = pos[i] - pos[i - 1];
        }
    }
    int ans;
    while(s <= e){
        int m = s + (e - s )/ 2;
        if(canplacecows(c, n, pos , m)){
            ans = m ;
            s = m + 1;

        } else{
            e = m - 1;
        }
    }
    return ans;
}

int main(){

int n = 5 ;
 int  c = 3;
 int pos[] = {1, 2, 4, 8, 9};
 cout << largestmindist(n, c,pos) << endl;

    return 0;
}