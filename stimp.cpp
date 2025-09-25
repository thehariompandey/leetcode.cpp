#include<iostream>
#include<stack>
using namespace std;

class Stack{
        // properties
    public:
    int *arr ;
    int top ;
    int size;
    // construtor 

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }


void push(int element){
    if(size - top > 1){
        top++ ;
        arr[top] = element ;
    }
    else{
        cout << "stack overflow" << endl;
    }
}

void pop(){
    if(top >= 0){
        top-- ;
    }
    else{
        cout << "stack underflow" << endl;
    }
}

int peek(){
    if(top >= 0 && top<size){
        return arr[top];
    }
    else{
        cout << "stack is empty" << endl;
        return -1;
    }
}

bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

};



int main(){
    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);

    cout << "top element" << st.peek() << endl;
    st.pop();
    cout << "after poping one elment now top is " << st.peek() << endl;
    st.pop();
        cout << "after poping two elment now top is " << st.peek() << endl;

    st.pop();
        cout << "after poping three elment now top is " << st.peek() << endl;

    st.pop();
        cout << "after poping four elment now top is " << st.peek() << endl;


    st.pop();
        cout << "after poping five elment now top is " << st.peek() << endl;


    st.pop();
        cout << "after poping six elment now top is " << st.peek() << endl;




}
