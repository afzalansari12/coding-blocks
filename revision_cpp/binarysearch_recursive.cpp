#include<iostream>
using namespace std;
bool binarysearch(int arr[], int t, int i, int j) {

    // Base case
    if (i > j)
        return false;

    int mid = i + (j - i) / 2;
// recursive case
    if (arr[mid] == t)
        return true;

    if (t > arr[mid])
        return binarysearch(arr, t, mid + 1, j);
    else
        return binarysearch(arr, t, i, mid - 1);
}
int main(){
    int arr[] = {2,3,5,6,6,8};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    int j = n -1;
    int t = 8;
    
  if( binarysearch(arr,t,i ,j)){
    cout << "target is present " << endl;
  }else{
    cout << "target is not  present " << endl;

  }
return 0;
}