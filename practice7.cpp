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

void findMaximum(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
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

void printList(Node *head)
{
    if (head == NULL)
    {
        return;
    }

    int maxVal = head->value;
    Node *temp = head->next;

    while (temp != NULL)
    {
        if (temp->value > maxVal)
        {
            maxVal = temp->value;
        }
        temp = temp->next;
    }
    cout << maxVal << endl;
}

int main()
{

    int data;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> data && data != -1)
    {
        findMaximum(head, data);
    }

    printList(head);

    return 0;
}