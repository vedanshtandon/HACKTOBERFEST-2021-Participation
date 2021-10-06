#include <bits/stdc++.h>
using namespace std;

template <class t>
class example
{
    public :
      t array[3];
      example(t n1,t n2,t n3)
      {
          array[0]=n1;
          array[1]=n2;
          array[2]=n3;
      }
      void display()
      {
          cout<<"first index value   "<<array[0]<<endl;
          cout<<"second index value  "<<array[1]<<endl;
          cout<<"third index value   "<<array[2]<<endl;
      }
};
int main()
{
    example<int> ex(1,2,3);
    ex.display();
    example<double> ex1(1.0,2.0,3.0);
    ex1.display();
    example<char> ex2('a','b','c');
    ex2.display();

    return 0;
}