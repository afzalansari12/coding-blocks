#include<iostream>
#include<vector>

using namespace std;

class treenode{
    public:
    int val;
    treenode* right;
    treenode* left;
    treenode(int val){

       this->val = val;
       this->left =nullptr;
       this->right = nullptr;
    }
     

};
void printpath(const vector<int>& path){
for (int i = 0; i < path.size();i++ ) {
        cout << path[i] << " ";
    }
    cout << endl;
}

void helper(treenode* root ,int targetsum , vector<int>& path, vector<vector<int>> allpaths){
    if(root == nullptr) return;
 
 if(root->left == nullptr && root->right == nullptr){
      
      if( root->val == targetsum){
        path.push_back(root->val);
        allpaths(path);
        path.pop_back();
      }
      return;
 }
           path.push_back(root->val);
           helper(root->left, targetsum  - root->val, path,allpaths);
           helper(root->right, targetsum - root->val, path,allpaths);
           path.pop_back();
           
}

vector<vector<int>> pathsum(treenode* root, int targetsum){
    vector<vector<int>> allpaths;
    vector<int> path;
    helper(root,targetsum, path,allpaths);
    return allpaths;

}

int main(){

    treenode* root = nullptr;
    
    root = new treenode(5);
    root->left = new treenode(4);
    root->right = new treenode(8);
    root->right->left =new treenode(13);
    root->right->right =new treenode(4);
    root->left->left = new treenode(11);
    root->left->left->right = new treenode(2);
    root->left->left->left = new treenode(7);
    root->right->right->right =new treenode(1);


int targetsum = 22;
 vector<vector<int>> allpaths; 
vector<int> path;



return 0;
}