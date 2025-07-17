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
        if (temp->next != NULL)
        {
            cout << " ";
        }
        temp = temp->next;
    }
}

void printMiddle(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    temp = head;

    int mid = count / 2;

    int res;

    for (int i = 0; i < mid - (count % 2 == 0 ? 1 : 0); i++)
    {
        temp = temp->next;
    }
    if (count % 2 == 0)
    {
        cout << temp->value << " " << temp->next->value << endl;
    }
    else
    {
        cout << temp->value << endl;
    }
}

int main()
{

    int data;
    Node *head = NULL;
    // Node *tail = NULL;

    while (cin >> data)
    {
        insert_at_tail(head, data);
    }

    printList(head);
    printMiddle(head);

    return 0;
}