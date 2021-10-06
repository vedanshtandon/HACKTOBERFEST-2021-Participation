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
     long long int d,l,r;
     cin>>d;
     cin>>l;
     cin>>r;
     if(d>=l && d<=r)
     {
         cout<<"Take second dose now"<<endl;
     }
     else if(d<l)
     {
         cout<<"Too Early"<<endl;
     }
     else
     {
         cout<<"Too Late"<<endl;
     }
   }
    return 0;
}