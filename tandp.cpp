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
     long long int n,m,x,y,a,b,thief=0,police=0;
     cin>>n;
     cin>>m;
     cin>>x;
     cin>>y;
     cin>>a;
     cin>>b;
     thief=n+m-x-y;
     police=max(n-a,m-b);
     if(police>=thief)
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