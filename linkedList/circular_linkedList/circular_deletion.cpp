#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        //  constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
};

void printCircularList(Node* &tail){
    // cout<<"tail"<<tail->data;
    Node* temp=tail;
    if(tail==NULL){
        // cout<<"tail1";
        cout<<"empty list !!"<<endl;
        return;
    }
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp!=tail){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertNode(Node* &tail,int key,int data){
    if(tail==NULL){//   empty list
        // cout<<"tail";
        Node* node1=new Node(data);
        tail=node1;
        node1->next=node1;
    }
    else{// non empty list
        Node* current=tail;

        while(current->data!=key){
            current=current->next;
        }
        Node* temp=new Node(data);
        temp->next=current->next;
        current->next=temp;
    }
}
void deleteNode(Node* &tail,int key){

    if(tail==NULL){//   list empty
        // cout<<"case 1"<<endl;
        cout<<"Nothing to delete !!"<<endl;
        return;
    }
    if(tail->next==tail){// only one node pointed by tail
        // cout<<"case 2"<<endl;
        tail=NULL;
        return;
    }
    Node* prev=tail;
    Node* current=prev->next;

    while(current->data!=key){
        // cout<<"case 3"<<endl;
        prev=current;
        current=current->next;
    }
    if(current==tail){// deleting node with tail->data
        // cout<<"case 4"<<endl;
        tail=tail->next;
    }// otherwise
    prev->next=current->next;
    current->next=NULL;
    delete current;
}
int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    // printCircularList(tail);
    insertNode(tail,3,4);
    // printCircularList(tail);
    insertNode(tail,4,6);
    // printCircularList(tail);
    insertNode(tail,4,5);
    printCircularList(tail);

    // cout<<tail->data;

    // deleteNode(tail,5);
    // printCircularList(tail);
    // cout<<tail->data;

    // deleteNode(tail,4);
    // printCircularList(tail);

    // deleteNode(tail,6);
    // printCircularList(tail);

    deleteNode(tail,3);
    printCircularList(tail);
    cout<<"tail :"<<tail->data;
}