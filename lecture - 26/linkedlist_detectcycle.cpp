#include<iostream>
using namespace std;
 bool iscyclepresent(listnode* head){

    set<listnode*> s;

    while(head != null){
        if(s.find(head)== s.end()){

            s.insert(head);
            head = head->next;
        } else {

            return true;
        }
    }

    return false;
 }
int main(){
     listnode* head = new listnode(10);
     head->next =new listnode(20); 
     head ->next->next =new listnode(30); 
     head->next->next->next =new listnode(40); 
     head->next->next->next->next =new listnode(50); 
     head->next->next->next->next->next =new listnode(60);
     head->next->next->next->next->next->next = head->next->next;

     iscyclepresent(head) ? cout << " cycle found" << endl : cout << "cycle not found" << endl; 
       
    return 0;
}