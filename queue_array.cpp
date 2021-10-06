#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int max_cap;
    int front;
    int rear;
    int arr[];

public:
    Queue(int s)
    {
        max_cap = s;
        front = -1;
        rear = -1;
        arr[max_cap];
    }

    void insert(int a)
    {
        if (rear == max_cap - 1)
        {
            cout << "Queue Overflow" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = a;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = a;
        }
    }

    int pop()
    {
        if (front == -1 || front > rear)
        {
            return -1111;
        }
        else
        {
            front = front + 1;
            return arr[front - 1];
        }
    }

    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else if (front > rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Queue Q(4);
    cout << "hi" << endl;
    Q.insert(10);
    Q.insert(20);
    Q.insert(30);
    Q.insert(40);
    Q.insert(50);
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
    cout << Q.pop() << endl;
}