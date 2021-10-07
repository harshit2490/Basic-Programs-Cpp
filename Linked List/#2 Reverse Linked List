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
    node* n = new node(val);  // creating new node
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

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;

        prevptr=currptr;
        currptr=nextptr;

    }
    return prevptr;
}

int main(){
    node* head=NULL;
   
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    
    node* newhead = reverse(head);
    display(newhead);
    
    return 0;
}


/*

OUTPUT
1->2->3->Null
3->2->1->Null

*/
