#include<iostream>

using namespace std;

int generateSubarrays(int arr[], int n ){
        // int maxsum = INT_MIN;
    for(int i =0; i<=n ;i++){
        for ( int j = i ; j <= n -1 ; j++){
        //  int sum = 0;
                  
            for( int k = i; k<= j; k++){
                // sum = sum + arr[k];
                cout << arr[k] << " ";
  
            }
        // maxsum = max(sum , maxsum);
        cout << endl ;
        
        }
        cout << endl;
        
    }

    return 0;
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/ sizeof(int);

   cout <<  generateSubarrays( arr, n);

    return 0;
}