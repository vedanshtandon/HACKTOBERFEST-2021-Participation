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
       double u,v,a,s;
       cin>>u;
       cin>>v;
       cin>>a;
       cin>>s;
       if(u<=v)
       {
           cout<<"yes"<<endl;
       }
       else
       {
           double k=u*u-(2*a*s);
           if(k>=0)
           {
               double vv=sqrt(k);
               if(vv<=v)
               {
                   cout<<"yes"<<endl;
               }
               else
               {
                   cout<<"no"<<endl;
               }
           }
           else
           {
               cout<<"yes"<<endl;
           }
       }
   }
    return 0;
}