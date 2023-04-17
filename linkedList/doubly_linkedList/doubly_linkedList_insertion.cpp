#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        //constructor
        Node(int data){
            this->data=data;
            this->prev=NULL;
            this->next=NULL;
        }
};

int getLength(Node* head){
    Node* temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void printList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
        return;
    }
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        tail=temp;
        head=temp;
        return;
    }
    Node* temp=new Node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }
    Node* temp=head;
    Node* nodeToInsert=new Node(data);
    int count=1;

    while(count<pos-1){
        if(count>=getLength(head)){
        cout<<"Wrong position !!"<<endl;
        return ;
        }
        count++;
        temp=temp->next;
    }
    
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }

    // Node* temp_next=temp->next;
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}


int main(){
    // Node* node1=new Node(10);
    // Node* head=node1;
    // Node* tail=node1;

    Node* head=NULL;
    Node* tail=NULL;

    printList(head);
    insertAtHead(head,tail,5);
    printList(head);
    // cout<<getLength(head);
    insertAtTail(head,tail,15);
    printList(head);
    // cout<<tail->data;

    insertAtPosition(head,tail,7,3);
    printList(head);

    cout<<"head "<<head->data<<" tail "<<tail->data<<endl;
}