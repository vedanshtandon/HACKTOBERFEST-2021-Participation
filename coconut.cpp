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
       long long int xa,xb,ya,yb,c=0;
       cin>>xa;
       cin>>xb;
       cin>>ya;
       cin>>yb;

       c=(ya/xa) + (yb/xb);
       cout<<c<<endl;
   }
    return 0;
}

