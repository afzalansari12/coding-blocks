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
 void printpreorder(treenode* root){
    if(root == nullptr){
        cout << "-1" << " ";
        return ;
           
           
    }
    cout << root->val <<  " "  ;

        printpreorder(root->left);
        
        printpreorder(root->right);
 }

 treenode* buildtree(){
    int val ;
    cin >> val;

    if(val == -1){
        return nullptr;
    }


    treenode* root = new treenode(val);

    root->left = buildtree();

    root->right = buildtree();

    return root;

 }

int main(){
    treenode* root = nullptr;

    root = buildtree();
     
     printpreorder(root);
     

return 0;
}