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

Node* reverseInGroups(Node* head,int key){

    // base case
    if(head==NULL){
        return NULL;
    }

    Node* prev=NULL;
    Node* current=head;
    Node* next=NULL;
    int count=0;

    //step 1 : solve one case

    while(current != NULL && count<key){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        count++;
    }

    //  step 2 : other cases will be handled by recursion

    if(next!=NULL){
        head->next=reverseInGroups(next,key);
        //  reverseInGroups(next,key) this will give us the head (prev) part of the k group
    }

    return prev;


}

int main(){
    Node* node1=new Node(1);
    Node* head=node1;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    printList(head);

    Node* temp=reverseInGroups(head,2);
    cout<<temp->data;
    printList(head);   
}