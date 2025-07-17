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
    if (head == NULL)
    {
        head = newNode;
        // return;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printReverse(Node *head)
{
    // Node *temp = head;
    if (head == NULL)
    {
        return;
    }

    printReverse(head->next);
    cout << head->value << " ";
}

int main()
{

    int data;
    Node *head = NULL;
    // Node *tail = NULL;

    while (cin >> data && data != -1)
    {
        printInsert(head, data);
    }

    printReverse(head);

    return 0;
}