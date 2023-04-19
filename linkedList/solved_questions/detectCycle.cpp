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

bool detectCycle(Node* head) 
{
    if (head == NULL)
    {
                return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {//if already visited then loop/cycle present
            return true;
        }
        visited[temp]=true;
        temp = temp->next;
    }
    return false;
}
int loopOn(Node* head){
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {//if already visited then loop/cycle present
            return temp->data;
        }
        visited[temp]=true;
        temp = temp->next;
    }
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
    tail->next=head->next;
    cout<<"cycle status :"<<detectCycle(head)<<endl;
    cout<<"loop on node with value : "<<loopOn(head)<<endl;

    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
}