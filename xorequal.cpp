#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int M=1000000007;
long long int power(lli r,lli n)
{
    if(n==0)
    {
        return 1;
    }

    long long int temp=power(r,n/2)%M;
    if(n%2==0)
    {
        return (temp*temp)%M;
    }
    else
    {
    return (((temp*temp)%M)*r)%M;
    }
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
      cout<<power(2,n-1)<<endl;
   }
    return 0;
}