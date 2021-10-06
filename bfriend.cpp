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
       lli n,a,b,c,x,min,time,first,t;
       cin>>n;
       cin>>a;
       cin>>b;
       cin>>c;
       cin>>first;
       min=abs(b-first)+abs(a-first)+ c;
       for(x=2;x<=n;x++)
       {
           cin>>t;
           time=abs(b-t) + abs(a-t) +c;
           if(min>=time)
           {
               min=time;
           }
       }
       cout<<min<<endl;
   }
    return 0;
}