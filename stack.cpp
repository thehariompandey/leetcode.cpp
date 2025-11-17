#include <iostream>
using namespace std;

class Stack {
public:
    int st[10];
    int topIndex = -1;

    // Push element
    bool push(int x) {
        if (topIndex >= 9) {   // max index = 9
            cout << "Stack Overflow!" << endl;
            return false;
        }
        topIndex++;
        st[topIndex] = x;
        return true;
    }

    // Return top element
    int top() {
        if (topIndex == -1) {
            cout << "Stack is Empty!" << endl;
            return -1;
        }
        return st[topIndex];
    }

    // Pop element
    int pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        int val = st[topIndex];
        topIndex--;
        return val;
    }

    // Return size
    int size() {
        return topIndex + 1;
    }

    // Check empty
    bool empty() {
        return topIndex == -1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top: " << s.top() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Is Empty: " << (s.empty() ? "Yes" : "No") << endl;
    cout << "Top: " << s.top() << endl;
    s.push(5);
    cout << "Size :" << s.size() << endl; 
    cout << "poped : " << s.pop() << endl;
    cout << s.top() << endl;
}
