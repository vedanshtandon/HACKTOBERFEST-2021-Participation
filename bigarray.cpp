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
      long long int n,s,x=0;
      cin>>n;
      cin>>s;
      x=((n*(n+1))/2)-s;
      if(x<=0 || x>n)
      {
          cout<<"-1"<<endl;
      }
      else
      {
          cout<<x<<endl;
      }
   }
    return 0;
}