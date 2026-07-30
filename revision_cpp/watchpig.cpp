#include<iostream>
#include<vector>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int c;
        cin >> c;

       vector<int> a(n);

       for(int i = 0; i < n; i++){
        cin >> a[i];
       }
       int sum = 0;

     for(int i = 1; i < n -1; i++){
         if(a[i-1] < 0 && a[i]<0){
            sum+=max(a[i-1],a[i]);
            sum-=c;
            i++;
         }else{
            sum+=a[i-1];
            sum-=c;
         }
       }
       if(sum > 0){
      cout << sum << '\n';

       }else{
        cout << "-1" << endl;
       }
    }
return 0;
}