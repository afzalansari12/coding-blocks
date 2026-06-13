#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
      
     int cmp = 0;
	int swaps = 0;

      for(int i = 1; i <= n-1; i++)
      {
		bool flag = false;
        for (int j = 0; j < n - i; j++){

        cmp++;
        if (arr[j] > arr[ j+ 1]){
              
            swap(arr[j], arr[ j+ 1]);
             swaps++;
			flag = true;
        }
	 

    
	}	
	   
	   if(flag == false ){
     cout << "no of comparison " << cmp <<   "  " << swaps << endl;
        
		   return;
	   }
	}
}
 
    int main()
	{
        int arr[] = { 10 , 20 , 30, 40 , 50};
        int n = sizeof(arr) / sizeof(int);

        bubblesort( arr, n);
        for( int i = 0; i < n ; i++){

            cout << arr[i] << " ";
        }
           cout << endl;
        return 0;

    }

// #include <stdio.h>

// int main() {
// 	int t,temp;
// 	scanf("%d",&t);
// 	int a[t];
// 	for(int i = 0; i < t;i++){
// 	    scanf("%d",&a[i]);
// 	   }
// 	    for(int i = 0; i <= t;i++){
// 	       // scanf("%d",&a[i]);
// 	        for(int j = 0; j <= t - i;j++){
// 	        if(a[j] > a[j+ 1]){
	           
// 	        temp = a[j];
// 	        a[j] = a[j + 1];
// 	        a[j + 1] = temp;
	        
// 	        }
	        
// 	    }	
	 
// 	    }	
// 	   printf("%d\n",a[2]);
// 	 return 0;
// }


