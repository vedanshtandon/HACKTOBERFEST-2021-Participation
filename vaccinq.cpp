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
     long long int n,p,x,y,ans=0;
     cin>>n;
     cin>>p;
     cin>>x;
     cin>>y;
     int array[n];
     for(int i=0;i<n;i++)
     {
         cin>>array[i];
     }
     for(int i=0;i<p;i++)
     {
        if(array[i]==0)
        {
            ans=ans+x;
        }
        else
        {
            ans=ans+y;
        }
     }
     cout<<ans<<endl;
   }
    return 0;
}