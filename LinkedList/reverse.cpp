#include <iostream>
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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&head, int data)
{
    Node *nodeToInsert = new Node(data);

    if (head == NULL)
    {
        head = nodeToInsert;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = nodeToInsert;
}

// Method 1 - using loop

void reverse(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

// Method 2 - using recursion
void reverseRecursion(Node *&head, Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;

    reverseRecursion(head, curr, prev);
}
void reverseRecursionList(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }
    Node *prev = NULL;
    Node *curr = head;

    reverseRecursion(head, curr, prev);
}

// Method 3 - better recursion method
void recursion(Node *&head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return ;
    }

    recursion(head->next);

    head->next->next = head;
    head->next = NULL;

}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    print(head);
    // reverse(head);
    // reverseRecursionList(head);
  recursion(head);
    print(head);
    return 0;
}