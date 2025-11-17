#include<iostream>
using namespace std;

class Node{
    public:

    int data ;
    Node* next;

    // constructor
    Node(int data){
    this->data = data;
    this->next = NULL;
    }
};

// insert at tail
void insertAtTail(Node* &tail , int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

// inset at head 
void insertAtHead(Node* &head , int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;    
}

// reverse a linked list 
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode = NULL;
    while (curr != NULL) {
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}


// add two linked list 
Node* addLL(Node* head1, Node* head2) {
    head1 = reverse(head1);
    head2 = reverse(head2);

    Node* ansHead = NULL;
    int carry = 0;

    while (head1 != NULL || head2 != NULL || carry) {
        int val1 = (head1 != NULL) ? head1->data : 0;
        int val2 = (head2 != NULL) ? head2->data : 0;

        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int digit = sum % 10;

        insertAtHead(ansHead, digit);

        if (head1) head1 = head1->next;
        if (head2) head2 = head2->next;
    }

    return ansHead;
}

// print fun 

void printList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next ;
    }
    cout << endl;
}




int main(){
    // First linked list: 1 -> 2 -> 3
    Node* head1 = new Node(1);
    Node* tail1 = head1;
    insertAtTail(tail1, 2);
    insertAtTail(tail1, 3);

    // Second linked list: 9 -> 9 -> 9
    Node* head2 = new Node(9);
    Node* tail2 = head2;
    insertAtTail(tail2, 9);
    insertAtTail(tail2, 9);

    cout << "First List: ";
    printList(head1);
    cout << "Second List: ";
    printList(head2);

    Node* result = addLL(head1, head2);
    cout << "Result: ";
    printList(result);

    return 0;
}