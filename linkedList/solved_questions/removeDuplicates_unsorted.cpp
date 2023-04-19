#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
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

Node *removeDuplicate_iterative(Node *head)
{
    Node *current = head;

    while (current != NULL)
    {
        Node *prev = current;
        Node *temp = current->next;

        while (temp != NULL)
        {
            if (current->data == temp->data)
            {
                Node *nodeToDelete = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete nodeToDelete;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        current = current->next;
    }
    return head;
}

Node *removeDuplicate(Node *head)
{
    Node *prev = head;
    Node *current = prev->next;
    map<int, bool> visited;
    visited[head->data] = true;
    while (current != NULL)
    {
        // prev=current;
        if (visited[current->data] == true)
        {
            Node *nodeToDelete = current;
            current = current->next;
            prev->next = current;
            delete nodeToDelete;
        }
        else
        {
            visited[current->data] = true;
            prev = current;
            current = current->next;
        }
    }
    return head;
}

Node *removeDuplicates_optimized(Node *head)

{
    if (head == NULL)
    {
        return NULL;
    }
    unordered_map<int, bool> visited;
    Node *curr = head;

    while (curr->next != NULL)
    {
        visited[curr->data] = true;

        if (visited[curr->next->data] == true)
        {
            curr->next = curr->next->next;
        }

        else
        {
            curr = curr->next;
        }
    }
    return head;
}

int main()
{
    Node *node = new Node(50);
    Node *head = node;
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    printList(head);

    cout << "after deleting all duplicates : " << endl;

    Node *temp = removeDuplicate_iterative(head);
    printList(temp);
}