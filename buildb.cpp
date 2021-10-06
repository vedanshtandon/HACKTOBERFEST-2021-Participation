#include <bits/stdc++.h>
using namespace std;
#define lli long long int
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
       lli n,r,x,max=0,k=0;
       cin>>n;
       cin>>r;
       lli a[n];
    lli b[n];
    for(x=0;x<n;x++)
    {
        cin>>a[x];
    }
    for(x=0;x<n;x++)
    {
        cin>>b[x];
    }
     max=b[0];
     k=b[0];
     for(x=1;x<n;x++)
     {
        k=k-((a[x]-a[x-1])*r);
        if(k<0)
        {
            k=b[x];
        }
        else
        {
            k=k+b[x];
        }
       if(max<=k)
       {
           max=k;
       }
     }
     cout<<max<<endl;
   }
    return 0;
}