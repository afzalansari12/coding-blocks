#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
     v.size();
    cout << v.size() << endl;
    v.push_back(10);
    cout << v.size() <<  endl;

    v.push_back(40);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.pop_back();
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    v.push_back(30);
    v.push_back(40);
    v.push_back(60);


    for( auto it = v.begin();it != v.end();it++){
        cout << *it << " ";
    }

v.clear();
cout << endl;
v.empty() ? cout << "vector is empty"  : cout << "vector is not empty" << endl ;
    return 0;
}