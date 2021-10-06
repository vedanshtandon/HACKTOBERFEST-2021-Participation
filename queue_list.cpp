#include <bits/stdc++.h>
using namespace std;
class Node
{
    public :
      int data;
      Node* next;
    
      Node(int a)
      {
          data=a;
          next=NULL;
      }
};
Node* push(Node* h,int a)
{
    Node* newnode=new Node(a);
    if(h==NULL)
    {
        h=newnode;
        return newnode;
    }
    while(h->next!=NULL)
    {
        h=h->next;
    }
    h->next=newnode;
    return newnode;
}
Node* pop(Node* h)
{
    if(h==NULL)
    {
        cout<<"DELETION IS NOT POSSILBLE QUEUE IS EMPTY "<<endl;
        return NULL;
    }
    h=h->next;
    return h;
}
void print(Node* h)
{
    while(h->next!=NULL)
    {
        cout<<h->data<<endl;
        h=h->next;
    }
    cout<<h->data<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int flag=0;
    int choice;
    while(flag==0)
    {
        cout<<"Enter 1 to push"<<endl;
        cout<<"Enter 2 to pop"<<endl;
        cout<<"Enetr 3 to print"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cin>>choice;

        if(choice==1)
        {
            int element;
            cout<<"enter element to be pushed"<<endl;
            cin>>element;
            if(head==NULL && tail==NULL)
            {
            tail=push(head,element);
            head=tail;
            }
            else
            {
                tail=push(head,element);
            }
        }
        else if(choice ==2)
        {
            if(head==NULL && tail==NULL)
            {
                cout<<"empty"<<endl;
            }
            else if(head==tail)
            {
                head=NULL;
                tail=NULL;
            }
            else
            {
                head=pop(head);
            }
        }
        else if(choice ==3)
        {
            print(head);
        }
        else
        {
            flag=1;
        }
    }
}