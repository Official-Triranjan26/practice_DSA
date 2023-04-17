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

void deleteByPosition(Node* &head,Node* &tail,int pos){
    if(pos==1){//   deleting 1st node...update head
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node* prev=NULL;
    Node* current=head;
    int count=1;

    while(count<pos){// traverse the current pointer to the pos
        count++;
        prev=current;
        current=current->next;
    }
    if(pos==getLength(head)){// if the current is the last element...update tail
        tail=prev;
        prev->next=NULL;
        delete current;
        return;
    }// other than 1st and last element
    prev->next=current->next;
    current->next->prev=prev;
    // current->next=NULL;
    // current->prev=NULL;
    delete current;
}

void deleteByValue(Node* &head,Node* &tail,int value){
    Node* current=head;
    Node* prev=NULL;
    int count=1;
    if(value==head->data){
        head=head->next;
        current->next-NULL;
        delete current;
        return;
    }

    while(count<getLength(head)){
        if(current->data==value){
            prev->next=current->next;
            current->next->prev=prev;
            delete current;
            return;
        }
        count++;
        prev=current;
        current=current->next;
    }
    if(current->next==NULL){
        tail=prev;
        prev->next=NULL;
        delete current;
        return;
    }
    cout<<"Value not found in the list !!"<<endl;

}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    printList(head);
    cout<<"head ->"<<head->data<<"   tail ->"<<tail->data<<endl;
    // deleteByPosition(head,tail,5);
    // printList(head);
    // cout<<"head ->"<<head->data<<"   tail ->"<<tail->data<<endl;

    deleteByValue(head,tail,50);
    printList(head);
    cout<<"head ->"<<head->data<<"   tail ->"<<tail->data<<endl;



}