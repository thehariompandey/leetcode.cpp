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

int main(){
    Node* node1 = new Node(10);
    cout << node1->data << endl;  // when you only write node1 then it give memory add so you have to use node->data to get value
    node1->next = new Node(15);
    cout << node1-> next-> data << endl;

}