#include<iostream>
using namespace std;

class Node{
    public:

    int data ;
    Node* next ;

    // constructor
    Node(int data){
    this->data = data ;
    this->next = NULL;
}
};

// insertion
void insertatHead(Node* &head, int data){
    // new node create 
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}

void insertatTail(Node* &tail , int data){
    Node* temp = new Node(data);
    tail->next = temp ;
    tail = temp;
}

// print 
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// insert at any position 
void insertAtPosition(Node* &head, Node* &tail, int position, int data){

    // edge case if you want to add something on 1 positon 
    if(position == 1){
        insertatHead(head, data);
        return;
    }


    // sabse pehle waha phaucho jaha insert karna hai 
    // that's why we use loop and temp variable 
    Node* temp = head ;
    int cnt = 1;

    while(cnt != position-1){
        temp = temp->next;
        cnt++ ;
    }

    // node create karo
    Node* nodetoinsert = new Node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;


    // inserting the element in last 
    if(temp->next == NULL){
        insertatTail(tail, data);
        return;
    }


}

int main(){
    Node* head = NULL;
    Node* tail = head;
    insertatHead(head, 5);
    tail = head;
    cout << head->data << endl;

    insertatHead(head, 2);
    print(head);

    insertAtPosition(head, tail, 2, 3);
    print(head);

    insertAtPosition(head , tail, 4, 30);
    print(head);
}