#include<bits/stdc++.h>
using namespace std;

class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
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

Node * uniqueSortedList(Node * head) {
    if(head==NULL){
        return NULL;
    }
    Node* current=head;
    
    while(current!=NULL){        
        if(current->next!=NULL && current->data==current->next->data){
            Node* next_next=current->next->next;
            Node* nodeToDelete=current->next;
            current->next=next_next;
            delete nodeToDelete;
        }
        else{
            current=current->next;
        }
    }
    return head;
}

int main(){
    Node* node=new Node(50);
    Node* head=node;
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,20);
    insertAtHead(head,20);
    insertAtHead(head,10);
    printList(head);

    cout<<"after deleting all duplicates : "<<endl;
    Node* temp=uniqueSortedList(head);
    printList(temp);
}