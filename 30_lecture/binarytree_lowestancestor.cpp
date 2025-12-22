#include<iostream>
using namespace std;

class treenode{

    public :
    int val;
    treenode* left;
    treenode* right;

    treenode(int val){
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;

    }
};

treenode* lowestCommonAncestor(treenode* root, treenode* p, treenode* q){
   

if(root == nullptr)
    {
    return nullptr;
}

    treenode* left = lowestCommonAncestor(root->left,p,q);
    treenode* right = lowestCommonAncestor(root->right,p,q);
    if(left!= nullptr and right != nullptr){
        return root;

    }else if( left!= nullptr){
        return left;


    }else if( right!= nullptr){
      return right;
   
    }
    return nullptr;

if(root-> == p->val || root-> val == q-> val ){
    return root;


}
}
int main(){

return 0;
}