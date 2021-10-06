#include <bits/stdc++.h>
using namespace std;
class mathematics
{
    public :
      int num1,num2;
      public :
      int sum()
      {
          return num1+num2;
      }
      int sub()
      {
          return num1-num2;
      }
};
class math : public mathematics
{
    public :
    math(int n1,int n2)
    {
        num1=n1;
        num2=n2;
    }
       int multiply()
       {
           return num1*num2;
       }
};
int main()
{
    int a,b;
    
    cout<<"ENTER THE FIRST NUMBER"<<endl;
    cin>>a;
    cout<<"ENTER THE SECOND NUMBER"<<endl;
    cin>>b;
    math obj(a,b);
    cout<<"sum = "<<obj.sum()<<endl;
    cout<<"multiply = "<<obj.multiply()<<endl;
    return 0;
}