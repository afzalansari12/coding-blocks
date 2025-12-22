#include<iostream>
#define ll long long

using namespace std;


 string s;
 int n_b , n_s, n_c;
 int p_b , p_s, p_c;
 int c_b = 0 , c_s = 0, c_c = 0;
 ll r;


 bool canpolycarpuscook(ll m){

    ll e_b = max((ll)0, m * c_b - n_b);
    ll e_s = max((ll)0, m * c_s - n_s);
    ll e_c = max((ll)0, m * c_c - n_c);
    
    ll e_r = e_b * p_b + e_s * p_s + e_c * p_c ;

    return e_r <= r;

 }


int main(){
    cin  >> s;
  cin >> n_b >> n_s >> n_c;
  cin >> p_b >> p_s >> p_c;
  cin >> r;

  for(char c : s){
    if(c == 'B') c_b++;
    else if( c == 'S') c_s++;
    else if (c == 'C') c_c++;
  }
   ll lo = 0;
   ll hi = 1e12 + 100;

   ll  ans = 0 ; // to track the max no of hamburgers polycarpus can make 

   while (lo <= hi ){
    ll m = lo +(hi - lo)/2;
    if(canpolycarpuscook(m)){
    // polycarpus can cook 'm' hamburgers therefore move rigth 
    // so the search space reduces from [lo, hi] to [m + 1, hi].
    
    ans = m ;
    lo = m + 1;

   } else {
    // polycarpus cannot cook 'm' hamburgers hence move left 
    // so the search space reduces from [lo, hi ] to [lo , m- 1].
    hi = m - 1;

   }
}
cout << ans << endl;
    return 0;
}