#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};

void insertionAtHead(Node* &head ,int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}

void insertionAtTail(Node* &tail , int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void printNode(Node* head){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main(){

    Node* head = new Node(10);
    Node* tail = head;
    insertionAtHead(head,20);
    insertionAtTail(tail,40);
    printNode(head);

    return 0;


}