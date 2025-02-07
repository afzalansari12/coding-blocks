#include<iostream>
#include<vector>
#include<climits>

using namespace std;
int f( const vector<int>& arr , int k,int i , vector<int>& dp){
    if(i == n){
        return 0;
    }
    int maxsofar  = INT_MIN;
    int maxij = arr[i];
    for(int j = i ; j < i + k and j < n; j++){
        maxsofar = max(maxsofar,(j - i + 1)*maxij + f(arr,n , k,j + 1));
    }
      return maxsofar;
}
int maxsumafterpartioning(vector<int>& arr , int k,int i , vector<int>& dp){
    // int arr[] = {}
    int n = arr.size;
    int fottomup(const vector<int>& arr)

}
int main(){
    vector<int>  arr[] = {}
    cout << 
return 0;
}