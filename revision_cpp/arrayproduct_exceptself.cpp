#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n ;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0 ;i < n; i++){

         cin >> arr[i];

    }

    vector<int> p_prod(n);

	p_prod[0] = arr[0];

	for(int i = 1; i < n; i++){

	 p_prod[i] = p_prod[i -1]*arr[i];


	}

     vector<int> s_prod(n);

     s_prod[n-1] = arr[n-1];
	for(int i = n-2; i >= 0; i--){

	s_prod[i] = s_prod[i + 1] * arr[i];


	}

    vector<int> ans(n);

    for(int i = 0; i < n; i++){
        
      if(i == 0)
            ans[i] = s_prod[1];
        else if(i == n - 1)
            ans[i] = p_prod[n - 2];
        else
            ans[i] = p_prod[i - 1] * s_prod[i + 1];
        

    }


    for(int i = 0 ;i < n; i++){

         cout << ans[i] << " ";

    }



return 0;
}