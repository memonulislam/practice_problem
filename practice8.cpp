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

void printInsert(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = NULL;
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

void printDesending(Node *&head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }

    cout << endl;
}

int main()
{

    int data;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> data && data != -1)
    {
        printInsert(head, data);
    }

    printDesending(head);

    printList(head);

    return 0;
}