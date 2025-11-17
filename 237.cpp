#include<iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next = nullptr;

    // constructor
    Node(int data){
        this-> data = data;
        this->next = nullptr;
    };

    // destructor
    
    ~Node(){
        int value = this->data;

        // memory free
        if(this->next != nullptr ){
            delete next ;
            this-> next = nullptr;
        }
        cout << "memory is free for the value is " << value << endl;
    }

};

// print head 
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void deleteNode(Node* &head , int value){
    // node ko temp bolkar aage badha 
    Node* curr = head;
    Node* prev = nullptr;

        int cnt = 1;
        while(curr != nullptr && curr->data != value){
                prev = curr;
                curr = curr->next; 
                cnt++ ;
            }
        if(curr == nullptr) {
            // Value not found, do nothing
            return;
        }
        if(prev == nullptr) {
            // Deleting head node
            head = curr->next;
        } else {
            prev->next = curr->next;
        }
        curr->next = nullptr;
        delete curr;
    }

int main(){
    // deleting node by its value 
    // traverse -> if(value == ) then delete ;
//  condition :The value of the given node should not exist in the linked list.
// The number of nodes in the linked list should decrease by one.
// All the values before node should be in the same order.
// All the values after node should be in the same order.

// head or 1st node
Node* head = new Node(10);
cout << head->data << " -> ";

// 2 node
head->next = new Node(15);
cout << head->next->data << " -> ";

// 3rd node 
head->next->next = new Node(20);
cout << head->next->next->data << " -> ";

// 4 th node 
head->next->next->next = new Node(25);
cout << head->next->next->next-> data ;


// calling deletenode funciton 
deleteNode(head, 15);
print(head);

return 0;


}