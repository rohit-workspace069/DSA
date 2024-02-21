#include<iostream>
using namespace std;

class node{        //creatig user defined linkedlist data type containing

    public:
    

    int data;          //Data and
    node* next;        // node pointer to next node

    node(int val){       // constructer

        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head , int val){     //fun. to add node at head/front
        node* n = new node(val);     //new node conatining value

        if(head==NULL){             //checking base case
            head = n;               // if ll is intial empty
            return;
        }

        n->next=head;
        head=n;

        return;

}

void insertAtTail(node* &head, int val){          // taking head via refrense so that change can reflect 
       
        node* n = new node(val);     //new node conatining value

        if(head==NULL){             //checking base case
            head = n;               // if ll is intial empty
            return;
        }

        node* temp = head;           // temp iterator to traverse list
        while(temp->next != NULL){    //reach at tail of ll
            temp = temp->next;
        }
        temp->next=n; 

        return;           
    }

    node* revrsell(node* &head){

        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;

        while(currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;

            prevptr=currptr;
            currptr=nextptr;


            // prev=curr;
            // curr=next;
            // next=next->next;
        }

        // if(next==NULL){
        //     next=prev;
        //     prev=curr;
        // }

        return prevptr;

    }

    void display(node* head){         //taking head by value cause we don't want to cahnge anything
        node* temp=head;

        while(temp->next !=0){
            cout<<temp->data<<"->";    //printing linked value
            temp = temp->next;        // pointing towards next pointer
        }
        
        if(temp->next==0){
            cout<<temp->data<<"->";
        }
        cout<<"NULL"<<endl;


        return;
    }

    bool search(node* head, int key){
        node* temp=head;

        while(temp!=NULL){
            if(temp->data==key){
            return true;
            }

            temp=temp->next;
        }
        return false;
    }

int main() {

    node* head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    // insertAtTail(head,4);
    // insertAtHead(head,7);
    // insertAtHead(head,8);
    // display(head);
    // cout<<search(head,4)<<endl;
    // cout<<search(head,9)<<endl;
    //  insertAtTail(head,9);
    //  cout<<search(head,9)<<endl;
    node* newhead = revrsell(head);
     display(newhead);
    
    return 0;
}