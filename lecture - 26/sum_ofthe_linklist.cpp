#include<iostream>
using namespace std;


class listnode{
    public :

    int val;
    listnode* next;

    listnode(int val){

        this->val = val;
        this->next = nullptr;

    }
};

void insertathead(listnode*& head, int val ){
   listnode* n = new listnode(val);
   n->next = head;
   head= n;

}

void printlinkedlist(listnode* head){
    while(head != nullptr){
        cout <<  head->val << " ";
        head= head->next;

    }
    cout << endl;

}

 listnode* sumof_linkedlist(listnode* head1 , listnode*head2){
    int carry = 0;

        listnode* head = nullptr;

        while(head1 != nullptr and head2 != nullptr){

            

            int d1 = head1->val;
            int d2 = head2->val;
              
            int sum = d1 + d2+  carry;

             carry = sum/ 10;

            listnode* n = new listnode(sum%10);
             n->next= head ;
             head = n;


            head1 = head1->next;
            head2 = head2->next;


        }
        

        
         while(head1 != nullptr){

            

            int d1 = head1->val;
              
            int sum = d1 +   carry;

             carry = sum/ 10;

            listnode* n = new listnode(sum%10);
             n->next= head ;
             head = n;


            head1 = head1->next;


        }
          
          while(head2 != nullptr){

            

            int d2 = head2->val;
              
            int sum = d2 +   carry;

             carry = sum/ 10;

            listnode* n = new listnode(sum%10);
             n->next= head ;
             head = n;


            head2 = head2->next;


        }

        if(carry == 1){

            listnode* n = new listnode(1);

            n->next= head ;

            head=n;


        }

    return head;
 }
 

int main(){


    listnode* head1 = nullptr;

    insertathead(head1, 2);
    insertathead(head1, 4);
    insertathead(head1, 1);

    printlinkedlist(head1);


   listnode* head2 = nullptr;


    insertathead(head2, 6);
    insertathead(head2, 9);
    insertathead(head2, 9);
    insertathead(head2, 6);
    insertathead(head2, 6);

    printlinkedlist(head2);

   listnode* head  = sumof_linkedlist(head1 , head2);

    
    printlinkedlist(head);

return 0;
}

