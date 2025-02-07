#include<iostream>
using namespce std;

void printlevelorder(treenode* root){

    queue<treenode*> q;
    q.push(root);
    while (!q.empty()) {
        treenode* front = q.front();
        q.pop();

        cout << front -> value << " ";
        if(front -> left != null){

            q.push(front -> left);
        }

        if(front -> right != null){

            q.push( front -> right);
        }
    }
}

int main(){

      trees


      
    return 0; 
}