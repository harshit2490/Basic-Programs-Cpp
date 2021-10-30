// Circular Linked List Operations
#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;  
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};


void insertAtHead(node* &head, int val){
    node* n = new node(val);    // creating new node
    if(head==NULL){        // if head is null
        n->next=n;
        head=n;
        return;
    }
    node* temp = head;    
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}    


void insertAtTail(node* &head, int val){    
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);    // creating new node
    node* temp = head;          // traverse using temp pointer
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}


void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* del=head;
    temp->next=head->next;
    head=head->next;
    delete del;
}


void deletion(node* &head, int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}


void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data <<" ";  
        temp=temp->next;
    }while(temp!=head);
    cout << endl;
}


int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,4);
    display(head);

    return 0;
}


/*

OUTPUT
1 2 3 4 
5 1 2 3 4 
5 1 2 4 

*/
