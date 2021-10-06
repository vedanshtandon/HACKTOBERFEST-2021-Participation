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
     long long int a,b;
     cin>>a;
     cin>>b;
     if(a>0 && b>0)
     {
         cout<<"Solution"<<endl;
     }
     else if(b==0)
     {
         cout<<"Solid"<<endl;
     }
     else
     {
         cout<<"Liquid"<<endl;
     }
   }
    return 0;
}