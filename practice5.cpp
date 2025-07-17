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

void insert_at_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int countListSize(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{

    int data;
    Node *head1 = NULL;
    Node *tail1 = NULL;

    while (cin >> data && data != -1)
    {
        insert_at_tail(head1, tail1, data);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (cin >> data && data != -1)
    {
        insert_at_tail(head2, tail2, data);
    }

    if (countListSize(head1) == countListSize(head2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}