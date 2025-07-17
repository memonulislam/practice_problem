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
        cout << temp->value;
        if (temp->next != NULL)
        {
            cout << " ";
        }
        temp = temp->next;
    }

    cout << endl;
}

int getSize(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insert_at_index(Node *&head, int idx, int value)
{
    int size = getSize(head);
    if (idx < 0 || idx > size)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(value);
    if (idx == 0)
    {
        newNode->next = head;
        head = newNode;
        printList(head);
        return;
    }

    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printList(head);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int data;
        cin >> data;
        if (data == -1)
        {
            break;
        }
        insert_at_tail(head, data);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int idx, value;
        cin >> idx >> value;
        insert_at_index(head, idx, value);
    }

    return 0;
}