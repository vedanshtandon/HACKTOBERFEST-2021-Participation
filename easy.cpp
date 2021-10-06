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

   long long int r,c,t,e,n,i,h,c1;
   cin>>r>>c>>t>>e>>n>>i>>h>>c1;

   long long int profit = h-(r+t+e+i +(c+c1)*n);

   if(profit>0)
   {
       cout<<"HAPPY "<<profit<<endl;
   }
   else
   {
       cout<<"SAD"<<endl;
   }
    return 0;
}

