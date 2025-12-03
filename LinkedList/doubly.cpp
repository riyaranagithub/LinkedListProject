#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev= NULL;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        return;
    }
    Node* temp=new Node(data);
    temp->next = head;
    head->prev = temp;
    head=temp;
}
void insertAtTail(Node* &head, int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        return;
    }
    Node* nodeToInsert=new Node(data);
    Node* temp = head;


    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next= nodeToInsert;
    nodeToInsert->prev = temp;
    
}
void insertionAtPosition(Node* &head,int position,int data){
    //if position is 1
    if(position==1 || head==NULL){
        insertAtHead(head,data);
        return;
    }
    int count=1;
    Node* temp = head;
    while(count<position-1){
        // cout<<"count:"<<count<<endl;
        temp=temp->next;
        count++;
     }
// cout<<"temp: "<<temp->data<<endl;
     if(temp->next==NULL){
        insertAtTail(head,data);
        return;
     }
     Node* nodeToInsert=new Node(data);
     nodeToInsert->prev=temp;
     nodeToInsert->next=temp->next;
     temp->next = nodeToInsert;
     temp->next->prev = nodeToInsert;
     

}

void deleteNode(Node* &head,int position){
    if(head==NULL){
        return;
    }
    if(position==1){
        Node* temp = head;
        head = temp->next;
        head->prev=NULL;
        temp->next=NULL;
        
        delete temp;
        return;
    }

    Node* prev= NULL;
    Node* curr= head;
    int count = 1;

    while(count<position){
        prev=curr;
        curr=curr->next;
        count++;
    }
    prev->next=curr->next;
     if(curr->next != NULL) {
        curr->next->prev = prev;  
        curr->next=NULL;
    }
    curr->prev =NULL;
    delete curr;
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);
    insertAtHead(head,5);
    print(head);
    insertAtTail(head,15);
    print(head);
    insertionAtPosition(head,3,12);
    print(head);
    deleteNode(head,3);
    cout<<"deleting"<<endl;
    print(head);
    deleteNode(head,3);
    cout<<"deleting"<<endl;
    print(head);

    return 0;
}