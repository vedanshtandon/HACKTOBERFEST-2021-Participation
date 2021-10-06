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
       lli n,xx,x,flavour=1;
       cin>>n;
       cin>>xx;
       lli array[n];
       for(x=0;x<n;x++)
       {
           cin>>array[x];
       }
       sort(array,array+n);
       for(x=1;x<n;x++)
       {
           if(array[x]!=array[x-1])
           {
             flavour=flavour+1;
           }
       }
       if(flavour>=n-xx)
       {
           cout<<n-xx<<endl;
       }
       else
       {
           cout<<flavour<<endl;
       }
   }
    return 0;
}