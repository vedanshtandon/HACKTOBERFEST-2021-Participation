#include <bits/stdc++.h>
using namespace std;
class StackUsingArray
{
    int *data;
    int nextindex;
    int maxsize;

    public:
      StackUsingArray(int totalsize)
      {
          data=new int[totalsize];
          nextindex=0;
          maxsize=totalsize;
      }

      int size()
      {
          return nextindex;
      }

      bool isEmpty()
      {
          if(nextindex==0)
          {
              return true;
          }
          else
          {
              return false;
          }
      }

      void push(int element)
      {
          if(nextindex==maxsize)
          {
              cout<<"STACK OVERFLOW"<<endl;
          }
          else
          {
              data[nextindex]=element;
              nextindex=nextindex+1;
          }
      }

      void pop()
      {
          if(nextindex==0)
          {
              cout<<"STACK UNDERFLOW"<<endl;
          }
          else
          {
              nextindex=nextindex-1;
          }
      }

      int top()
      {
          if(nextindex==0)
          {
              return -1111111;
          }
          else
          {
              return data[nextindex-1];
          }
      }
};
int main()
{
    int flag=0;
    int siz;
    cout<<"ENTER THE SIZE OF THE STACK ARRAY"<<endl;
    cin>>siz;
    StackUsingArray s(siz);
    while(flag==0)
    {
        int ch;
        cout<<"ENTER 1 TO PUSH"<<endl;
        cout<<"ENTER 2 TO POP"<<endl;
        cout<<"ENTER 3 TO RETURN TOP ELEMENT"<<endl;
        cout<<"ENTER 4 TO RETURN SIZE"<<endl;
        cout<<"ENTER 5 TO CHECK IS EMPTY"<<endl;
         cout<<"ENTER 6 TO EXIT"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1 :
               {
                   int d;
                   cout<<"enter the element to push"<<endl;
                   cin>>d;
                   s.push(d);
                   break;
               }

               case 2:
               {
                   s.pop();
                   break;
               }
               case 3:
               {
                   cout<<"topmost element of stack is "<<s.top()<<endl;
                   break;
               }
               case 4:
               {
                   cout<<"THE LENGTH OF THE STACK IS "<<s.size()<<endl;
                   break;
               }
               case 5:
               {
                   cout<<s.isEmpty()<<endl;
                   break;
               }
               case 6:
               {
                   flag=1;
                   break;
               }
               default:
               {
                   cout<<"INVALID CHOICE"<<endl;
               }
        }
    }
}