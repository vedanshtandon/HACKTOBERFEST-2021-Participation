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

   long long int n,m;
   cin>>n;
   cin>>m;
   long long int ans=(n/m);
   for(int i=0;i<m-(n%m);i++)
   {
       cout<<ans<<" ";
   }
   for(int i=0;i<n%m;i++)
   {
       cout<<ans+1<<" ";
   }
   cout<<endl;
    return 0;
}