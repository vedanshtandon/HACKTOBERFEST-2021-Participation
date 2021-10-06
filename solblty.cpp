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
      long long int x,a,b,res=0;
      cin>>x;
      cin>>a;
      cin>>b;
      a=a*10;
      b=b*10;
      res=a + (b*(100-x));
      cout<<res<<endl;
   }
    return 0;
}