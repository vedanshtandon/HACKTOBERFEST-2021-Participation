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
     long long int p,a,b,c,x,y;
     cin>>p;
     cin>>a;
     cin>>b;
     cin>>c;
     cin>>x;
     cin>>y;

     // anar = effective cost of 1 anar
     // charki = effective cost of 1 charki
     long long int anar  =b+(x*a);
     long long int charki=c+(y*a);
     long long int ans1,ans2,ans;

     ans1= (p/anar) + ((p%anar)/charki) ;
     // maximum number of crackers bought if anar price < charki

     ans2= (p/charki)+((p%charki)/anar);
     // maximum number of crackers bought if charki cost <= anar

     // taking maximum of both the case
     ans=max(ans1,ans2);
     cout<<ans<<endl;
   }
    return 0;
}