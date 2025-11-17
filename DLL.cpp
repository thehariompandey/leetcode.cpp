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

Node* deleteTail(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }

    Node* newtail = tail->prev;
    newtail->next = nullptr;
    tail->prev = nullptr;

    delete tail;
    return head;

}


Node* removeKthElement(Node* head , int k){
    if(head == NULL) return NULL;

    Node* temp = head;

    int cnt = 0;
    while(temp != NULL){
        cnt++ ;
        if(cnt == k) break;
        temp = temp->next;
    }

    Node* back = temp->prev;
    Node* front = temp->next;

    if(back == nullptr && front == nullptr){
        delete temp;
        return NULL;
    }

    else if(back == NULL){
        deleteHead(head);
        return head;
    }

    else if(front == NULL){
        deleteTail(head);
        return head;
    }

    back->next = front;
    front->prev = back;
    temp->next = NULL;
    temp->prev = NULL;
    
    delete temp;
    return head;

}

int main(){
    vector<int> arr= {2,4,5,6};
    Node* head = convertArr2DLL(arr);
    print(head);

    head = deleteHead(head);
    print(head);

    head = deleteTail(head);
    print(head);

    head = removeKthElement(head , 1);
    print(head);


}