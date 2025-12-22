#include<iostream>
using namespace std;
class treenode{
   public:

    int val;
    treenode* left;
    treenode* right;

    treenode(int val){
        

        this-> val = val;
        this-> left = nullptr;
        this-> right = nullptr;

  
    }
};

 void PrintInvertTree(treenode* root){
   
   if(root == nullptr){
    return ;
   } 

   PrintInvertTree(root->right);
   PrintInvertTree(root->left);


    swap(root->left,root->right);

}

 void printpreorder(treenode* root){
    if(root == nullptr){
        cout << "-1" << " ";
        return ;
           
           
    }
        cout << root->val <<  " "  ;
       
        printpreorder(root->left);
        printpreorder(root->right);
        // cout << root->val <<  " "  ;

 }
int main(){

    treenode* root = nullptr;

    root = new treenode(10);
    root->left = new treenode(20);
    root->right = new treenode(30);
    root->left->left = new treenode(40);
    root->left->right = new treenode(50);
    root->right->right = new treenode(60);
    root->left->right->left = new treenode(70);


     PrintInvertTree(root);

     printpreorder(root);

    return 0;

}