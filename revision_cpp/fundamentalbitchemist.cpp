#include<iostream>
#include<cstring>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m ;
        cin >> m;
        int a[n];

        for(int i=0; i < n;i++){
            cin >> a[i];
        }

         int cnt = 0;
        sort(a,a+m);
        for(int i = 0; i < m ;i++){
            if(a[i]!=i){
                cnt++;
            }
        }

     cout << cnt << endl;

    }
return 0;
}