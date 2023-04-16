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
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void deleteAtPosition(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    else{
        Node* current=head;
        Node* prev=NULL;
        int count =1;
        
        while(count<pos){
            prev=current;
            current=current->next;
            count++;
        }
        //  if delete last element then for updating tail
        if(current->next==NULL){
            tail=prev;
        }
        // cout<<"count "<<count<<endl;
        // cout<<prev->data<<endl;
        // cout<<current->data<<endl;
        // cout<<current->next<<endl;
        prev->next=current->next;
        delete current;
        // cout<<prev->next<<endl;
    }

}

void deleteByValue(Node* &head,Node* &tail,int data){
    Node* current=head;
    Node* prev=NULL;
    //  delete 1st node
    if(data==head->data){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }

    while(current!=NULL){
        //  delete last node...update tail
        if(current->next==NULL){
            tail=prev;
        }
        //delete middle and last nodes
        if(current->data==data){
            // cout<<current->data<<" "<<prev->data<<endl;
            prev->next=current->next;
            delete current;
            return;
        }
        prev=current;
        current=current->next;
    }
    //  data to be deleted not found
    cout<<"provided data not found !!"<<endl;
    
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail =node1;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    printList(head);

    // cout<<tail->data<<endl;
    // cout<<tail->next;
    // deleteAtPosition(head,tail,4);
    // printList(head);
    // cout<<tail->data;
    deleteByValue(head,tail,10);
    printList(head);
    cout<<endl;
    cout<<head->data<<endl;
    cout<<tail->data;
}