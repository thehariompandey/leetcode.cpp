#include<iostream>
#include<queue>
using namespace std;

class node{
    public: 
     int data ;
     node* left ;
     node* right;

     node(int d){
        this -> data = d ;
        this ->left = NULL ;
        this -> right = NULL;
     }
};

node* buildTree(node* root){
    cout << "enter the data for the root node" << endl;
    int data ;
    cin >> data ;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "enter the data to insert in left" << data << endl;
    root -> left = buildTree(root->left);

    cout << "enter the data to insert in right" << data << endl;
    root -> right = buildTree(root -> right);

    return root;
}


// now i want to show my no like a tree so i divide my root and nodes into level 

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL); // <-- level marker


    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){ // purana root complete ho chuka hai now go to next level
            cout << endl;

            if(!q.empty()){ // queue still has some child node 
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp ->left){
            q.push(temp->left);
        }
           if(temp->right){
            q.push(temp ->right);
        }
        }
    }
}


int main(){

    node* root = NULL;

    // creating tree 
    root = buildTree(root);

    // level order
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout << "printing level order traversal " << endl;

    levelOrderTraversal(root);

    return 0;
}




