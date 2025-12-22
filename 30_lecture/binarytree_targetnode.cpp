#include<iostream>
#include<vector>
using namespace std;

class treenode{
    public :
    int val;
    treenode* right;
    treenode* left;

    treenode(int val){
        this->val = val;
        this->right = nullptr;
        this->left = nullptr;


    }

};
vector<int> path;
bool found  = false;


 void generatepath(treenode* root , int target){
      if(root == nullptr){
        return ;
      }

      if(root->val == target){
        path.push_back(root->val);
        for(int i = 0; i <path.size(); i++){
            cout << path[i] << " " ;
        }
        cout << endl;
        found = true;
        path.pop_back();
        return;
      }

      path.push_back(root->val);
      generatepath(root->left,target);
      generatepath(root->right,target);9

     
     path.pop_back(); // back trekking;

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

    int target;
    
    cin >> target;

    generatepath(root , target);
 return 0;
 }