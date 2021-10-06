#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   long long int t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
     long long int n;
     cin>>n;
     long long int ans=1;
     for(int i=1;i<=n;i++)
     {
         ans=ans*i;
     }
     cout<<ans<<endl;
   }
    return 0;
}