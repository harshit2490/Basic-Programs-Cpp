// Insert, Display, Delete, Search operations:

#include<bits/stdc++.h>
using namespace std;

class node{  // creating structure
public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};


void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}


void insertAtTail(node* &head, int val){
    node* n = new node(val); //Creating new node
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;  // temp pointing to head
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout <<"Null"<<endl;
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

void deletion(node* &head, int val){
    if(head==NULL){  // when 0 node
        return;
    }
    if(head->next==NULL){  // when 1 node
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;   
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}


int main(){
    node* head=NULL;
   
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    
    insertAtHead(head,4);
    display(head);
    
    cout<<search(head,4)<<endl;
    
    deletion(head,3);
    display(head);

    deleteAtHead(head);
    display(head);
    return 0;
}


/*

OUTPUT
1->2->3->Null
4->1->2->3->Null
1
4->1->2->Null
1->2->Null

*/
