// #include<iostream>
// #include<cmath>

// using namespace std;
// int main(){

//     int x , y;
//     cin >> x >> y;
//     int ans ;
//     if(x < y){
//      ans = y - x;
//     }else{
//         if((x - y)%2 == 0){
//         ans = (x-y)/2;
//         }else{
//             ans = (x-y)/2 +2;
//         }
//     }
//     cout << ans << " ";
// return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){

//     bool flag = false;
//     int a , b;

//     cin >> a >> b;

//     int i = 1;

//     while(a <= b){

//         if(i%2){
//             a+=1;
//         }else{
//             a+=2;
//         }

//       if(a==b){
//         flag = true;
//            break;
//         }
        
//        i++;
//     }

//     if(flag){
//         cout << "yes" << endl;
//     }else{
//         cout << " no" << endl;
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a , b; 
//   cin >> a >> b;
// int d = b-a;
// if(d>=0 && d%3!=2){
//     cout << " yes" << end;
// }else{
//     cout << " no" << end;
// }
// return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>


// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//  vector<int> a(n);
//  vector<int> b(n);
//  for(int i = 0; i < n ; i++){
//     cin >> a[i];
//  }
//  for(int i = 0; i < n ; i++){
//     cin >> b[i];
//  }

//  vector<int> c(2*n);

//  for(int i = 0; i < n; i++){
//      c[i] = a[i];
//  }

// for (int i = 0; i < n; i++) {
//     c[n + i] = b[i];
// }
  
// sort(c.begin(),c.end());

// int N = 2*n;

// int sum = c[N/2-1] + c[N/2];

// cout  << endl << sum << endl;

// return 0;
// }

// #include<iostream>
//  #include<vector>
//  #include<algorithm>
// using namespace std;
// int main(){
//     int n ;
//     cin >> n;
//     vector<int> a[n];
//     vector<int> freq[101] = {0};

//     for(int i = 0; i < n; i++){
//         cin > a[i];
//        freq[a[i]]++;

//     }

//     vector<int> rank[101] = {0};
//      int r = 1;
//     for(int i = 100; i > 101; i++){
//         if(freq[i] > 0){
//             rank[i] = r;
//             r+=rank[i];
//         }
//     }

//     for(int i = 0; i< n; i++){
//         cout << mark[a[i]] << endl;
//     }




// return 0;
// } 


// 72 80 80 80  97 90 90




// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
//     cin >> t;
// 	while(t--){
// 	    int x,y,p;
// 	    cin >> x >> y >>p;

// 	    if(x*y>=p){
// 	      cout << "0" << endl;
// 	       break;
// 	    }
	    
// 	    int cnt = 0;
	    
// 	    while(true){
	         
// 	        if((++x)*(y) > (--x)*(++y)){
//                 cnt++;
// 	            x++;
// 	            if(x*y>=p){
// 	                break;
// 	            }
// 	        }else{
//                 cnt++;
// 	            y++;
	            
// 	            if(x*y>=p){
// 	                break;
// 	            }
// 	        }
	        
// 	    }
// 	    cout << cnt << "";
// 	}
//   return 0;
// }
 
 // armsstrong number 

// #include<iostream>
// using namespace std;
// int main(){
//     int l,u;
//     cin >> l >> u;
//     for(int i = l ; i<=u;i++){

//         int x = i;

//         int temp=i;

//         int sum=0;

//         int y = 0;

//         while(temp){
//             y++;
//             temp/=10;
//         }
        

//         while(x>0){

//           int d = x%10;

//           int s =1;
//           int p = y;

//          while(p--){
//                s*=d;
//             }
//             sum+=s;
//              x/=10;
//         }

//         if(sum == i){
//             cout << sum  << endl;
//         }
       
//     }
// return 0;
// }


// jumping number 

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin >> x;
    
//     for(int i = 0; i <= x;i++){
//         if(i < 10){
//             cout << i << " ";
//         }else{
//               int temp = i;
//               int prev = temp%10;
//               temp/=10;
//               bool flag = true;
//               while(temp){
//                  int k = temp%10;
//                  if(abs(k-prev)!= 1){
//                     flag = false;
//                     break;
//                  }
//                  prev = k;
//                  temp /=10;

//               }
            
//              if(flag){
//                 cout << i << " ";
//          }

             
//         }

        
      
//     }
    
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int a = 1;
//     int b = 1;
//     int c = 1;
    
//     for(int i = 3; i <=n; i++){
//         int x = a + b + c;
//         a = b;
//         b = c ;
//         c = x;
//     }
//     cout << c << endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n == 0 || n == 1 || n == 2 ){
//       return 1 ;
//     }
    
//    int A = fib(n -1);
//    int B = fib(n -2);
//    int C = fib(n - 3);

// return  A + B +C;  
// }
// int main(){
//     int n ;
//     cin >> n;
//     cout << fib(n) << endl;
// return 0;
// }