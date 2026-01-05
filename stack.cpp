#include<iostream>
using namespace std ;


class Stack{
    // properties 
    public:
    int size ;
    int *arr ;
    int top ;


    // construtor
    Stack(int size){ 
    this -> size = size ;
    arr = new int[size];
    top = -1;
    }


void push(int element){
    if(top < size -1){
        top++ ;
        arr[top] = element;
    }else{
        cout << "stack overflow" << endl;
    }
}

void pop(){
    if(top >= 0){
        top-- ;
    }else{
        cout << "stack underflow" << endl;
    }
}

int peek(){
    if(top >= 0){
        return arr[top];
    }else{
        cout << "stack is empty" << endl;
        return -1;
    }
}

bool isempty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
};

int main(){
    Stack s(3);

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.peek() << endl;

    s.pop();
    cout << s.peek() << endl;
}