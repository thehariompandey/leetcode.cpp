#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data ;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* insertInputBst(Node* root , int d){
    // base case 
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        // right wala part mei insert karenge 
        root -> right = insertInputBst(root -> right , d);
    }

    else if(d < root -> data ){
        // left part mei inset karenge 
        root -> left = insertInputBst(root -> left , d);
    }

    return root ;

}

// to make it tree we also write level order traversal function 
void levelOrderTraversal(Node* root ){
if(root == NULL){
    cout << "tree is empty" << endl;
    return ;
}

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();

while(size--){
        Node* temp = q.front();
        cout << temp -> data << " ";
        q.pop();


        if(temp -> left ){
            q.push(temp -> left);
        }

        if(temp -> right){
            q.push(temp -> right);
        }
    }

        cout << endl;
    }

}

Node* minval(Node* root){
    Node* temp = root;

    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp;
}

Node* maxval(Node* root){
    Node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return temp;
}

void takeInput(Node* &root){
    int data ;
    cin >> data ;

    while(data != -1){
        root = insertInputBst(root , data );
        cin >> data ;
    }

}

int main(){
    Node* root = NULL;
    cout << "enter data to create bst" << endl;
    takeInput(root);
    cout << "printing the bst" << endl;
    levelOrderTraversal(root);

    cout << "min value is " << minval(root) -> data << endl;
    cout << "max value is " << maxval(root) -> data << endl;

    return 0;
}