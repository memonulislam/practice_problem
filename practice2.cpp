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
    newNode->next = NULL;

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
    while (head != NULL)
    {
        head = head->next;
    }
}

int hasDuplicate(Node *head)
{
    int freq[101] = {0};

    while (head != NULL)
    {
        freq[head->value]++;
        if (freq[head->value] > 1)
        {
            return 1;
        }
        head = head->next;
    }

    return 0;
}

int main()
{

    int data;
    Node *head = NULL;
    Node *tail = NULL;

    while (cin >> data)
    {
        insert_at_tail(head, data);
    }

    printList(head);

    if (hasDuplicate(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}