#include <bits/stdc++.h>
using namespace std;
class stacks
{
public:
    int size;
    int top;
    int array[];

public:
    stacks(int s)
    {
        size = s;
        top = -1;
        array[size];
    }

    void push(int a)
    {
        if (top == size - 1)
        {
            cout << "STACK OVERFLOW --- INSERTION IS NOT POSSIBLE" << endl;
        }
        else
        {
            top = top + 1;
            array[top] = a;
            cout << "ELEMENT IS INSERTED AT TOP SUCCESSFULLY " << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            int elemnet = array[top];
            top = top - 1;
            cout << "TOP ELEMENT DELETED SUCCESSFULLY " << endl;
        }
    }
    int tops()
    {
        if (!isEmpty())
        {
            return array[top];
        }
        return -111111;
    }
    void print()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << array[i] << endl;
        }
    }
};
int main()
{
    int cap;
    cout << "ENTER THE SIZE OF THE STACK" << endl;
    cin >> cap;
    stacks s(cap);

    // do the required codeing according to need
    return 0;
}