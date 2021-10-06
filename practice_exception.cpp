#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE NUMBER TO FIND FACTORIAL "<<endl;
    cin>>n;

    // c++ provide a way through try and catch to handle exceptions
    // try block contains the code that may throw an exception
    // the keyword throw is used to through an exception
    // the catch block contains the code to handle the exception


    // there are two types of exceptions
    // 1) synchronous  :- that the programmer can handle
    // 2) Asynchronous :- that the programmere cannot handle

    // implicit type convertion is not done in try catch block
    // means char will not be converted to ASCII value


    // catching of derived class must be done before base class
    
 
    try
    {
        if(n<0)
        throw -1;

        if(n==0)
        throw 'a';

        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"THE FACTORIAL OF THE ENTERED NUMBER IS "<<fact;
    }
    catch(int p)
    {
        if(p==-1)
        cout<<"THE FACTORIAL OF NEGATIVE NUMBER IS NOT POSSIBLE"<<endl;
    }
    catch(...)
    {
        cout<<"DEFAULT CATCH BLOCK"<<endl;
    }
    return 0;   
}