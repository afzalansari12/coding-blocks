// #include<iostream>
// #include<climits>

// using namespace std;

// // time : O(n^3)

// int maximumSubarraySum(int arr[], int n) {

// 	int maxSoFar = INT_MIN;


// 	for (int i = 0; i <= n - 1; i++) {

// 		for (int j = i; j <= n - 1; j++) {


// 			int sum = 0;
// 			for (int k = i; k <= j; k++) {
// 				sum += arr[k];

//             }

// 			maxSoFar = max(maxSoFar, sum);


// 		}

// 	}

// 	return maxSoFar;

// }

// int main() {

// 	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
// 	int n = sizeof(arr) / sizeof(int);

// 	cout << maximumSubarraySum(arr, n) << endl;

// 	return 0;
// }



// #include<iostream>
// using namespace std;
// int main(){

// 	int arr[] ={ 10, 20 , 30, 40 , 50 , 60};
// 	int n = sizeof(arr)/ sizeof(int);
// 	int brr[n];
    
// 	for(int i = 0; i < n ; i++){
// 		int prefixsum = 0;
         
// 	   for(int j = 0; j <= i ; j++){
//              prefixsum += arr[j];
// 		}

// 		brr[i] = prefixsum;
// 	}

// 	for(int i = 0; i < n ; i++){
// 		cout << brr[i] << " ";
// 	}
// return 0;
// }


#include<iostream>
using namespace std;
int main(){
	vector<int> v = { 10, -1, 30, -40, 50,80};
	int n = v.size();
	vector<int> psum(n);
	psum[0] = v[0];

	for(int i = 1; i < n; i++){
		psum[i] = psum[i - 1] + v[i];

	}
	int maxsofar = INT_MIN;
	for(int i= 0; i <n ; i++){
		for(int j = i; j < n; j++){
			int sum = i == 0? psum[j] : psum[j] - psum[i -1];
			maxsofar = max( maxsofar, sum);
		}
	}
	cout << maxsofar << "/n";
	
return 0;
}