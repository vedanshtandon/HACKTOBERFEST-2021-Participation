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

   lli t,z,m=1000000007;
   cin>>t;
   for(z=1;z<=t;z++)
   {
     long long int n,ans=1;
     cin>>n;
     n=n*2;

     for(int i=3;i<=n;i++)
     {
         ans=((ans%m)*(i%m))%m;
     }
     cout<<ans<<endl;
   }
    return 0;
}