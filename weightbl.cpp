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
     lli w1,w2,x1,x2,m;
     cin>>w1;
     cin>>w2;
     cin>>x1;
     cin>>x2;
     cin>>m;

     lli weight_diff=w2-w1;
     if((x1*m<=weight_diff)&&(x2*m>=weight_diff))  
     {
         cout<<"1"<<endl;
     }
     else
     {
         cout<<"0"<<endl;
     }
   }
    return 0;
}