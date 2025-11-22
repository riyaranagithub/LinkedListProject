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
        this->next = nullptr;
    }
};

export void insertionAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertionAtTail(Node *&head, int data)
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

void insertAtMiddle(Node *&head, int position, int data)
{

    if (head == NULL || position == 1)
    {
        insertionAtHead(head, data);
        return;
    }

    int count = 1;
    Node *temp = head;
    while (count < position - 1 && temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertionAtTail(head, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void printNode(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    insertionAtHead(head, 20);
    insertionAtTail(head, 40);
    insertAtMiddle(head, 3, 33);
    printNode(head);
    deleteNode(head, 4);
    cout << endl;
    printNode(head);

    return 0;
}