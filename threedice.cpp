#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
       int x,y;
       cin>>x;
       cin>>y;
       int sum=x+y;
        float d=0.0;
       if(sum==2)
       {
           d=4.0/6.0;
       }
       else if(sum==3)
       {
           d=3.0/6.0;
       }
       else if(sum==4)
       {
           d=2.0/6.0;
       }
       else if(sum==5)
       {
           d=1.0/6.0;
       }
       else
       {
           d=0.0;
       }
       cout<<d<<endl;
   }
    return 0;
}
