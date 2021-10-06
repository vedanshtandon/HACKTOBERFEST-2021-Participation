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
     long long int l,b;
     cin>>b>>l;
     double rmin,rmax;
     rmin=(l*l)-(b*b);
     rmin=sqrt(rmin);
     rmax=(l*l)+(b*b);
     rmax=sqrt(rmax);
     cout<<rmin<<" "<<rmax<<endl;
   }
    return 0;
}