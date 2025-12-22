#include<iostream>

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

bool PathSum1(treenode* root ,int targetsum){
    if(root == nullptr) return false;
 
 if(root->left == nullptr && root->right == nullptr){
      
      return root->val == targetsum;
 }
   
   return PathSum1(root->left, targetsum - root->val) || PathSum1(root->right, targetsum - root->val);

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


int target ;
cin >> target;

if(PathSum1(root,target)){
cout << "target sum is present " << endl;
}else{
    cout << " target sum is not present" << endl;
}

return 0;
}