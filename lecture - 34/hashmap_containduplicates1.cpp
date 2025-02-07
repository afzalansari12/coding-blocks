#include<string>
#include<vector>
#include<map>
#include<set>
using namespace std;
bool isduplicatepresent(const vector<int>& v){
     
 map < int , int> freqmap;
 for(int x :v ){
    freqmap[x]++;
 }
 for(pair<int,int> p : freqmap){

    int el = p.first;
    int fr = p.second;

    cout << el << " :"<< fr << endl;
 }

for(pair<int,int> p : freqmap){
    int el = p.first;
    int fr = p.second;
    if(fr > 1){
        return true;
    }
    
 }  
 return false;
        
    }
int main(){
    vector<int> v = { 1,2,3,1, 1,1,3};
    isduplicate(v) ? cout << "true" << endl : cout << "false" << endl ;
    isduplicatepresentusingset(v) ? cout << "true" << endl: cout << "false" << endl;
    return 0;
}