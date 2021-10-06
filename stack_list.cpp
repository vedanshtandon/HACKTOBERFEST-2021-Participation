#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
       int data;
       Node *next;
       Node(int a)
       {
           data=a;
           next=NULL;
       }
};
Node* push(Node* h,int a)
{
    Node *newnode=new Node(a);
    newnode->next=h;
    Node* head=newnode;
    return head;
}
bool isEmpty(Node* k)
{
    if(k==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
Node* pop(Node* h)
{
    if(h==NULL)
    {
        return NULL;
    }
    h=h->next;
    return h;
}
int top(Node* h)
{
    return h->data;
}
int main()
{
    int flag=0;
    Node* head=NULL;
    while(flag==0)
    {
        int ch;
        cout<<"ENTER 1 TO PUSH ELEMENT "<<endl;
        cout<<"ENTER 2 TO POP ELEMENT "<<endl;
        cout<<"ENTER 3 TO EXIT "<<endl;
        cin>>ch;
        if(ch==3)
        {
            flag=1;
            break;
        }

        if(ch==1)
        {
            int element;
            cout<<"enter element to be pushed"<<endl;
            cin>>element;
            head=push(head,element);
        }
        if(ch==2)
        {
            head=pop(head);
        }
    }
    while(head->next!=NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
    cout<<head->data<<endl;
    return 0;
}