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
     long long int p,target,ans=0;
     cin>>p;
     cin>>target;
     if(p>=target)
     {
         ans=0;
     }
     else
     {
         while(p<target)
         {
             ans=ans+1;
             p=p*3;
         }
     }
     cout<<ans<<endl;
   }
    return 0;
}
