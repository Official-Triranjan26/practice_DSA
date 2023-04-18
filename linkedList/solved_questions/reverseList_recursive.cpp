#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void printList(Node* &head){
    Node* temp=head;
    while(temp!=NULL){//traverse through list
        cout<<temp->data;
        temp=temp->next;
        cout<<" ";
    }
    cout<<endl;
}

void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void reverse(Node* &head,Node* prev,Node* current){
    //  base case
    if(current==NULL){
        head=prev;
        return;
    }
    Node* forward=current->next;
    reverse(head,current,forward);
    current->next=prev;
    
}

Node* reverseLisT(Node* head){
    Node* current=head;
    Node* prev=NULL;

    reverse(head,prev,current);
    return head;
}

int main(){
    Node* node1=new Node(1);
    Node* head=node1;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    printList(head);

    Node* temp=reverseLisT(head);
    printList(temp);
}