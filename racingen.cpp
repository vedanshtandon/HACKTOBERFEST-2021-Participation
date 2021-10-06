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
       lli x,r,m;
       cin>>x;
       cin>>r;
       cin>>m;
       r=r*60;
       m=m*60;
      if(r>m)
      {
          cout<<"NO"<<endl;
      }
      else if(x>=r && r<=m)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          lli t=(2*r)-x;
          if(m>=t)
          {
              cout<<"YES"<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
      }
   }
    return 0;
}