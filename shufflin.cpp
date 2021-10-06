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
      long long int n,odd=0,even=0;
      long long int odd1=0,even1=0;
      cin>>n;
      for(int i=0;i<n;i++)
      {
          int a;
          cin>>a;
          if(a%2==0)
          {
              even=even+1;
          }
          else
          {
              odd=odd+1;
          }
      }
      odd1=n/2;
      even1=ceil(n/2.0);

      long long int ans=min(odd1,odd)+min(even1,even);
      cout<<ans<<endl;

   }
    return 0;
}