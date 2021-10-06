#include <bits/stdc++.h>
using namespace std;

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

Node* TakeInput()
{
    int data;
    system("cls");
    cout<<"ENTER THE DATA TO BE ADDED TO THE LIST OR ENTER -1 TO EXIT"<<endl;
    cin>>data;
     Node* head=NULL;
     Node* tail=NULL;
     while(data!=-1)
     {
         Node *NewNode=new Node(data);
         if(head==NULL)
         {
             head=NewNode;
             tail=NewNode;
         }
         else
         {
             tail->next=NewNode;
             tail=NewNode;
         }
         cout<<"ENTER THE DATA TO BE ADDED TO THE LIST OR ENTER -1 TO EXIT"<<endl;
         cin>>data;
     }
     return head;
}


void print(Node * head)
{
     Node * ptr=head;
     while(ptr!=NULL)
     {
         cout<<ptr->data<<endl;
         ptr=ptr->next;
     }
     cout<<ptr->data<<endl;
}


int main()
{
    Node* head=TakeInput();
    print(head);
}

