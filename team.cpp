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

   lli t,z,ans=0;
   cin>>t;
   for(z=1;z<=t;z++)
   {
     long long int a,b,c,count1=0,count0=0;
     cin>>a;
     cin>>b;
     cin>>c;
     if(a==1)
     {
         count1++;
     }
     if(b==1)
     {
         count1++;
     }
     if(c==1)
     {
         count1++;
     }
     if(count1>=2)
     {
         ans=ans+1;
     }
   }
    cout<<ans<<endl;
    return 0;
}