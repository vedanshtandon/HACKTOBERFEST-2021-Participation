#include<bits/stdc++.h>
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
       int n,sum;
       cin>>n>>sum;
       
       if(n==1)
       {
           cout<<sum<<endl;
       }
       else if(sum==1)
       {
           cout<<0<<endl;
       }
       else
       {
           int ans;
           if(n%2==0)
           {
               ans= (sum/((n/2)+1));
           }
           else{
               ans=(sum/(round(n/2.0)));
           }
           cout<<ans<<endl;
       }
      
   }
    return 0;
}
