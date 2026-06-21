// #include<iostream>
// #include <algorithm>

// using namespace std;
//    bool isgood(string str){
    
//     for(int i = 0; i < str.size();i++){
//         if(str[i] != 'i' && str[i] != 'a' && str[i] != 'e'&&str[i] != 'o'&&str[i] != 'u'){
//                 return false;            
//         }
//     }
//     return true;

// }
//  int longest_goodsubstring(const string& str){
//       int maxsofar = 0;

//      for(int i = 0; i < str.size(); i++){

//         for(int j = i; j < str.size(); j++){
           
//          string substring = str.substr(i,j-i +1);
            
//       if(isgood(substring)){
//         maxsofar = max(maxsofar,j-i +1);
//       }
//  }
   
//  }
//     return maxsofar;
    
//  }
// int main(){
//     string str;
//     cin >> str;
//    cout << longest_goodsubstring(str);
// return 0;
// }

// #include<iostream>
// #include<algorithm>

// using namespace std;
// int main(){
//     string str = "cbaeicdeiou";
//     int cnt = 0;
//     int maxsofar = 0;
//     for(char ch: str){
//       if( ch == 'a'|| ch =='e'|| ch == 'i'|| ch == 'o'|| ch =='u'){
//           cnt++;
//           maxsofar = max(maxsofar , cnt);
//       }else{
//         cnt = 0;
//       }

//     }
//     cout << maxsofar;
    
// return 0;
// }



    
// #include <iostream>
// using namespace std;

// bool ispalindrome(string str);

// int palindromic_substrings(string str) {
//     int cnt = 0;

//     for (int i = 0; i < str.size(); i++) {
//         for (int j = i; j < str.size(); j++) {
//             string substring = str.substr(i, j - i + 1);

//             if (ispalindrome(substring)) {
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }

// bool ispalindrome(string str) {
//     int i = 0;
//     int j = str.size() - 1;

//     while (i < j) {
//         if (str[i] != str[j]) {
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

// int main() {
//     string str = "abaaba";
//     cout << palindromic_substrings(str);
//     return 0;

// }

#include<iostream>
using namespace std;

 bool ispalindrome(string str){
      int i = 0;
    int j = str.size() -1;
    while(i < j){
       if(str[i] != str[j]){
        return false;
       }else{
         i++;
         j--;
       }
    }
    return true;
}

int palindromic_substrings(string str){

    int cnt = 0;

    for(int i = 0; i < str.size(); i++){
    for(int j = i; j < str.size(); j++){
     string substring = str.substr(i, j - i + 1);
  
       if(ispalindrome(substring)){
         cnt++;
       }
            
        }
       
    }
 return cnt;
}

   
int main(){
    string str = "abaaba";
   
   cout << palindromic_substrings(str);

return 0;
}

