#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* next;

    // destructor 
    Node(int data){
    this-> data = data ;
    this -> next = NULL;
}
};

// insertion
void insertatHead(Node* &head , int data){
    // new node creating 
    Node* temp = new Node(data);
    temp ->next = head;
    head = temp;
}

void insertatTail(Node* &tail, int data){
    // new node create 
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertatPosition(Node* &head, Node* &tail, int data){

}

// printing function 
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    Node* node1 = new Node(10);
    // cout << node1->data << endl;  // when you only write node1 then it give memory add so you have to use node->data to get value
    // node1->next = new Node(15);
    // cout << node1-> next-> data << endl;

    // head pointed to node1
    Node* head = node1;
    print(head);

    // inserting in place of head
    insertatHead(head,12);
    print(head);

    Node* tail = node1;
    insertatTail(tail,13);
    print(head); // no should always print from head 


    return 0;
    

}