#include <bits/stdc++.h>
using namespace std;
// A userdefined datatyp node
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};
// A program to print the linked list
void print(Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << temp->data << endl;
}

Node *TakeInput()
{
    int data;
    Node *head = NULL;
    Node *tail = NULL;
    cout << "ENETER THE NUMBER TO BE ADDED TO LIST OT ENTER -1 TO EXIT" << endl;
    cin >> data;
    while (data != -1)
    {
        Node *NewNode = new Node(data);
        if (head == NULL)
        {
            head = NewNode;
            tail = NewNode;
        }
        else
        {
            tail->next = NewNode;
            tail = NewNode;
        }
        cout << "ENETER THE NUMBER TO BE ADDED TO LIST OT ENTER -1 TO EXIT" << endl;
        cin >> data;
    }
    return head;
}
int main()
{
    Node *head = NULL;
    head = TakeInput();
    print(head);
    return 0;
}