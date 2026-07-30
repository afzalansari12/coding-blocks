#include<iostream>
using namespace std;
bool linearsearch(int arr[], int t,int i,int n){
    if(i > n){
        return false;
    }
    // recursive case
      if(arr[i] == t){
        return true;
      }

    return linearsearch(arr,t,i+1,n);
}

int main(){

    int arr[] = {2,3,5,6,6,8};
    int n = sizeof(arr)/sizeof(int);

    int i = 0;
    int t = 15;
    
     
  if( linearsearch(arr,t,i ,n)){
    cout << "target is present " << endl;
  }else{
    cout << "target is not  present " << endl;

  }
return 0;
}