#include<iostream>
#include<vector>
using namespace std ;

class Node{
    public:
    int data ;
    Node* next ;
    Node* prev ;

    // constructor
    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }

    // constructor with all arguments
    Node(int data, Node* next, Node* prev){
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp ;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* deleteHead(Node* &head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;
    head = head->next;
    head->prev = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

int main(){
    vector<int> arr= {2,4,5,6};
    Node* head = convertArr2DLL(arr);
    print(head);

    head = deleteHead(head);
    print(head);

}