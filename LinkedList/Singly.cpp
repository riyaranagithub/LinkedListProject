#include <iostream>
using namespace std;

// Creating a Node class for Linked List
class Node {
    public: 
        int data;
        Node* next;
    // Constructor to initialize the node
    // Node(int data){
    //     this -> data = data;
    //     this -> next = nullptr;
    // }
};

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* last = new Node();

    head -> data = 1;
    head -> next = second;
  
    second -> data = 2;
    second -> next = last;

    last -> data = 3;
    last -> next = nullptr;

    // Traversing the linked list
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    return 0;
}