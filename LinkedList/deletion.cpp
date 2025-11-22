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

void insertionAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    else
    {
        int count = 1;
        Node *prev = NULL;
        Node *curr = head;
        while (curr != NULL && count < position)
        {
            // cout << count;

            prev = curr;
            curr = curr->next;
            count++;
        }
        if (curr == NULL)
        {
            cout << "Out of bound!!";
            return;
        }
        prev->next = curr->next;

        delete curr;
    }
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
     insertionAtHead(head, 30);
     insertionAtHead(head, 40);
   
    printNode(head);
    deleteNode(head, 4);
    cout << endl;
    printNode(head);

    return 0;
}