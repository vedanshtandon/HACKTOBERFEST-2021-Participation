#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
       long long int n,k,ans=0;
       cin>>n;
       cin>>k;

       long long int maxshift=pow(2,n-1);
       long long int temp=pow(2,n)-1;
       if(k>maxshift)
       {
           ans=temp*maxshift*2;
       }
       else
       {
           ans=temp*k*2;
       }
       cout<<ans<<endl;
   }
    return 0;
}
