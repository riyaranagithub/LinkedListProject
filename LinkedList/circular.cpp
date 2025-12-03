#include <iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};

void print(Node* tail){
    if(tail==NULL){
        return;
    }
    Node* temp = tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
    cout<<endl;
}

void insertNode(Node* &tail, int element, int data){
    //empty list
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
        return;
    }
    //non-empty list
    Node* curr = tail;
    while(curr->data != element){
        curr=curr->next;
    }
    //element found -> curr is representing element node
    Node* temp = new Node(data);
    temp->next = curr->next;
    curr->next = temp;



}
int main(){
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    return 0;
}
