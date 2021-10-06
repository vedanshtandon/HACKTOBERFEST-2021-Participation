#include <bits/stdc++.h>
using namespace std;
// A userdefined datatype node
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
// function to take input of the linked list
Node *TakeInput()
{
    Node *head = NULL;
    Node *tail = NULL;
    int data;
    cout << "ENTER A NUMBER TO ADD TO LINK LIST OR ENTER -1 TO EXIT" << endl;
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
        cout << "ENTER A NUMBER TO ADD TO LINK LIST OR ENTER -1 TO EXIT" << endl;
        cin >> data;
    }
    return head;
}
// function to print the linked list
void print(Node *h)
{
    Node *temp = h;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << temp->data << endl;
}
// function to insert at begining
Node *InsertAtBegin(Node *h)
{
    cout << "ENTER THE ELEMENT TO BE INSERTED AT BEGINING" << endl;
    int data;
    cin >> data;
    Node *NewNode = new Node(data);
    Node *temp = NewNode;
    temp->next = h;
    return temp;
}

// Function to insert at the end
Node *InsertAtEnd(Node *h)
{
    cout << "ENTER THE ELEMENT TO BE INSERTED AT END" << endl;
    int data;
    cin >> data;
    Node *NewNode = new Node(data);
    Node *temp = h;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NewNode;
    return h;
}

// Function to insert a node at i-th position
Node *InsertNodeAtI(Node *h, int ii, int data)
{
    int a = 0;
    Node *temp = h;
    Node *temp2;
    Node *NewNode = new Node(data);
    if (ii == 0)
    {
        NewNode->next = temp;
        temp = NewNode;
        return temp;
    }
    else
    {
        while (a != ii - 1)
        {
            temp = temp->next;
            a = a + 1;
            temp2 = temp->next;
        }
        temp->next = NewNode;
        NewNode->next = temp2;
        return h;
    }
}
// function to calculate the length of the linked list
int LengthOfList(Node *h)
{
    if (h == NULL)
    {
        return 0;
    }
    else
    {
        int a = 0;
        while (h != NULL)
        {
            a = a + 1;
            h = h->next;
        }
        return a;
    }
}
// deleta a node at a certain index
Node* DeleteNode(Node* h,int pos)
{
    Node* temp=h;
    Node* head=h;
    if(LengthOfList(h)>=pos)
    {
          int a=0;
          while(a!=pos)
          {
              h=h->next;
              temp=h->next;a=a+1;
          }
          h->next=temp;
          delete h;
          return head;
    }
    else
    {
        cout<<"DELETION IS NOT POSSILBE"<<endl;
        return h;
    }
}
int main()
{
    Node *head;
    head = TakeInput();
    system("cls");
    head = InsertAtBegin(head);
    system("cls");
    head = InsertAtEnd(head);
    system("cls");
    cout << "ENTER THE POSITION OF NODE" << endl;
    int index;
    cin >> index;
    cout << "ENTER THE VALUE OF THE ELEMENT" << endl;
    int data;
    cin >> data;
    head = InsertNodeAtI(head, index, data);
    system("cls");
    print(head);
    cout<<"ENTER THE POSITION OF THE NODE TO BE DELETED"<<endl;
    int pos;
    cin>>pos;
    head=DeleteNode(head,pos);
    cout << "THE LENGTH OF THE LIST IS " << LengthOfList(head) << endl;
    print(head);
}