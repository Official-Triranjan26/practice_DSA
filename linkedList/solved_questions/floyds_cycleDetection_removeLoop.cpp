#include <bits/stdc++.h>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    { // traverse through list
        cout << temp->data;
        temp = temp->next;
        cout << " ";
    }
    cout << endl;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

bool cycleDetection_1(Node* head){//   givs if cycle present
    if(head==NULL){
        return false;
    }
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(fast==slow){//   if fast and slow points the same node then cucle is present
            return true;
        }
    }
    return false;
}

Node* cycleDetection_2(Node* head){//   gives a node within the cycle
    if(head==NULL){
        cout<<"empty node !"<<endl;
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        if(fast==slow){//   if fast and slow points the same node then cucle is present
            return fast;
        }
    }
    return NULL;
}

Node* floyds_cycleDetection(Node* head){//  gives the node where cycle is forming
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;        
        }
        if(slow==fast){
            slow=head;
            break;
        }
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
        if(slow==fast){
            return fast;
        }
    }
    
}

void removeLoop(Node* &head){
    if(head==NULL){
        return;
    }
    Node* loopPoint=floyds_cycleDetection(head);
    Node* temp=loopPoint;
    while(temp->next!=loopPoint){
        temp=temp->next;
    }
    cout<<"temp data : "<<temp->data<<endl;
    temp->next=NULL;
}

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = NULL;
    Node *head1 = node2;
    // cout<<node1<<endl;
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node *head = node1;
    Node *tail = node1;
    // printList(head);
    insertAtHead(head, 12);
    // printList(head);

    insertAtTail(tail, 13);
    insertAtTail(tail, 15);
    printList(head);
    tail->next=head->next;//    creating cycle
    // cout<<"cycle detection status : "<<cycleDetection_1(head)<<endl;

    // Node* temp=cycleDetection_2(head);
    // if(temp!=NULL){
    //     cout<<"node within the loop/cycle : "<<temp->data<<endl;
    // }
    // else{
    //     cout<<"cycle not dectected !!"<<endl;
    // }
    Node* temp2=floyds_cycleDetection(head);
    cout<<"cycle/loop forming on : "<<temp2->data<<endl;
    // printList(head);
    removeLoop(head);
    printList(head);

    
    // cout << "head : " << head->data << endl;
    // cout << "tail : " << tail->data << endl;
}