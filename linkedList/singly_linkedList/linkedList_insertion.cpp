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
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void inPosition(Node* &head,Node* &tail,int data,int pos){
    //  spc case--> for position 1
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    //  IF POS IS GREATER THAN LENGTH OF LINKED LIST + 1
    // int count_forTest=1;
    // Node* temp_forTest=head;
    // while(temp_forTest->next!=NULL){
    //     temp_forTest=temp_forTest->next;
    //     count_forTest++;
    // }
    // if(pos>count_forTest){
    //     cout<<"cannot insert!!! wrong position !!";
    //     return;
    // }

    Node* temp=head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count+=1;
    }
    //  spc case--> for position last
    //  for normal insertAtPosition the tail is not updating , thats why we have to consider the spc case od insert at end
    if(temp->next==NULL){
        insertAtTail(tail,data);
    }

    //  creation of the node to be inserted
    Node* nodeToInsert=new Node(data);
    cout<<temp->data<<endl;
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

}
int main(){
    Node* node1=new Node(10);
    // cout<<node1<<endl;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head=node1;
    Node* tail =node1;
    // printList(head);
    insertAtHead(head,12);
    // printList(head);

    insertAtTail(tail,13);
    // printList(head);

    inPosition(head,tail,5,2);
    // printList(head);

    inPosition(head,tail,7,6);
    printList(head);

    cout<<"head : "<<head->data<<endl;
    cout<<"tail : "<<tail->data<<endl;   
}