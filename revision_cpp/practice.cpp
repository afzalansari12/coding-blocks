// #include<iostream>
// using namespace std;

// int main(){

//     int n;
//     cin >> n;

//     int h[n];

// for(int i = 0; i < n ; i++){
//     cin >> h[i];
// }

// int i = 0; 
// int j = n - 1;
// int maxareasofar = 0;

// while(i < j){
//     int minh = min(h[i], h[j]);
//      int w = j - i;
//      int a = w*minh;
//    maxareasofar = max(a, maxareasofar);

//   if(h[i] < h[j]){

   
//      i++;

//   }else{

    
//      j--;
//   }

//   return maxareasofar;
// }

// return 0;
// }

// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     int n, m;
//     cout << "value of m  and n";
//     cin >> n >> m;

    

// vector<int> a(n);

// vector<int> b(m);

// // both vector a and b are sorted.

// cout <<" element a[i] = ";
// for(int i = 0; i < n ; i++){

//     cin >> a[i];
// }
// cout <<" element b[i] = ";

// for(int j = 0; j < m ; j++){
//     cin >> b[j];
// }

// vector<int> c(m + n);

// int i = 0;
// int j = 0;
// int k = 0;

// while(i < n && j < m){

//     if(a[i] < b[j]){
//         c[k] = a[i];
//         i++;
//         k++;
//     }else{

//         c[k] = b[j];
//         j++;
//         k++;
//     }
// }

// while( i < n){

//     c[k] = a[i];
//     i++;
//     k++;
// }

// while( j < m){
//     c[k] = b[j];
//     j++;
//     k++;
// }
// cout <<" element c[k] =    ";

// for(int j = 0; j < m + n ; j++){
//     cout <<  c[j] << " ";
//     cout << endl;
// }


// return 0;
// }
