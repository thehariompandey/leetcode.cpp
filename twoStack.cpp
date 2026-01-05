#include <iostream>
using namespace std;

class Twostack
{
public:
    int top1;
    int top2;
    int *arr;
    int size;

    // constructor
    Twostack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size - 1;
    }

    void push1(int element)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void push2(int element)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout << "stack1 is empty" << endl;
            return -1;
        }
    }
    int peek2()
    {
        if (top2 <= size)
        {
            return arr[top2];
        }
        else
        {
            cout << "stack2 is empty  " << endl;
            return -1;
        }
    }
};

int main()
{
    Twostack st(5);

    st.push1(1);
    st.push1(5);
    st.push1(2);


    st.push2(3);
    st.push2(4);

    cout << st.peek1() << endl;
    cout << st.peek2() << endl;
    // cout << st.pop1() << endl;
    // cout << st.pop2() << endl;
}