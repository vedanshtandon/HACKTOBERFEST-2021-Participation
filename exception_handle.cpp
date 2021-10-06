#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numerator,denominator;
    cout<<"ENTER THE VALUE OF THE NUMERATOR"<<endl;
    cin>>numerator;
    cout<<"ENTER THE VALUE OF THE DENOMINATOR"<<endl;
    cin>>denominator;

    try
    {
        if(denominator==0)
        throw 0;

        cout<<"THE FRACTION IS "<<numerator<<"/"<<denominator<<endl;
    }
    catch(int x)
    {
        if(x==0)
        {
            cout<<"THE DENOMINATOR CANNOT BE ZERO"<<endl;
        }
    }
    return 0;
}