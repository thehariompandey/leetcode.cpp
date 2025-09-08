#include <iostream>
using namespace std;

class Queue {
public:
    int q[4];          // fixed size array
    int start = -1;    // front index
    int end = -1;      // rear index
    int curr_size = 0;
    int capacity = 4;

    // Push element into queue
    bool push(int x) {
        if (curr_size == capacity) {
            cout << "Queue Overflow!" << endl;
            return false;
        }

        if (curr_size == 0) {
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % capacity;
        }

        q[end] = x;
        curr_size++;
        return true;
    }

    // Pop element from queue
    int pop() {
        if (curr_size == 0) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }

        int val = q[start];
        if (curr_size == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % capacity;
        }
        curr_size--;
        return val;
    }

    // Get front element
    int top() {
        if (curr_size == 0) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return q[start];
    }

    // Get current size
    int size() {
        return curr_size;
    }

    // Check if empty
    bool empty() {
        return curr_size == 0;
    }
};

// Demo
int main() {
    Queue qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    cout << "Front: " << qu.top() << endl;
    cout << "Popped: " << qu.pop() << endl;
    cout << "Front after pop: " << qu.top() << endl;
    cout << "Size: " << qu.size() << endl;
    cout << "Empty? " << (qu.empty() ? "Yes" : "No") << endl;
}
