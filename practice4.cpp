#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int data)
{
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
}

void printSorted(Node *head)
{
    Node *temp = head;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->value > temp->next->value)
        {
            cout << "NO" << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "YES" << endl;
}

int main()
{

    int data;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> data && data != -1)
    {
        insert_at_tail(head, data);
    }

    printList(head);
    printSorted(head);

    return 0;
}