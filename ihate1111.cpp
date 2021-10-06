#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int digits(long long int n)
{
    int digit=0;
    while(n!=0)
    {
        digit=digit+1;
        n=n/10;
    }
    return digit;
}

int number(int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum=(sum*10)+1;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
       long long int n;
       cin>>n;
       
       while(n>=11)
       {
           n=n-number(digits(n));
       }

       if(n==0)
       {
           cout<<"yes"<<endl;
       }
       else
       {
           cout<<"no"<<endl;
       }
   }
    return 0;
}