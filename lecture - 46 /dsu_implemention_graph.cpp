#include<iostream>
#include<vector>

using namespace std;
class disjointset{
    public : 
    vector<int> p;
    disjointset(int n){
    p.resize(n + 1);
    
    }
    void createset(int x){
       p[x] = x;
    }
    void unionset(int x, int y){
        int lx = findset(x);
        int ly = findset(y);
        if(lx != ly){
            p[x] = ly;
        }

    }
    int findset(int x){
        if(p[x] ==x){
            return x;
        }
        return findset(p[x]);
    }

};

int main(){
    int n = 4;
    

    disjointset ds(n);

    ds.createset(1);
    ds.createset(2);
    ds.createset(3);
    ds.createset(4);

    ds.unionset(2,3);
    
    cout << ds.findset(3) << endl;

    cout << ds.findset(2) << endl;

     ds.unionset(1,4);

     cout << ds.findset(1) << endl;
     cout << ds.findset(2) << endl;
     cout << ds.findset(3) << endl;
     cout << ds.findset(4) << endl;


return 0;
}