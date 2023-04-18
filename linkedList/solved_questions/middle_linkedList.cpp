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

int getLength(Node* head){
    Node* temp=head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

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

Node* getMiddle(Node* head){
    int length=getLength(head);
    int mid=length/2;
    int count=0;
    Node* temp=head;
    while(mid>count){
        temp=temp->next;
        count++;
    }
    return temp;
}
Node* getMiddle_optimized(Node* head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
    }
    return slow;
}
int main(){
    Node* node1=new Node(1);
    Node* head=node1;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    printList(head);

    // Node* middle1=getMiddle(head);
    // cout<<middle1->data;

    cout<<endl;

    Node* middle2=getMiddle_optimized(head);
    cout<<middle2->data;
}