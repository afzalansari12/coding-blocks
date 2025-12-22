// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
     
//      vector <int> v = {1, 2, 3, 4, 5};

//      cout << v.size();
//      cout << endl;
//      cout << v.capacity() ; 
//      cout << endl;

//      for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//      }
       
//        reverse(v.begin() , v.end());

//        for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//      }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
   
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40);
   v.push_back(50);

    cout << v.size();
    cout << endl;
    cout << v.capacity();
    cout << endl;

    // Printing the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Corrected reverse function
    reverse(v.begin(), v.end());

    // Printing the reversed vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
