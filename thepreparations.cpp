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
     long long int m,n,k;
     cin>>m;
     cin>>n;
     cin>>k;
     if(n*k<m)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
   }
    return 0;
}