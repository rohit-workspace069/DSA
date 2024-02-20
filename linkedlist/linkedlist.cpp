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

int main() {

    node* head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,7);
    insertAtHead(head,8);
    display(head);

    return 0;
}