#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int data)
{
    Node *newNode = new Node(data);

    while (head == NULL)
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

int print_list(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }

    return count;
}
int main()
{

    int data;

    Node *head = NULL;

    while (cin >> data)
    {
        insert_at_tail(head, data);
    }
    cout << print_list(head) << endl;

    return 0;
}