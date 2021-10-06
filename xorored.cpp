#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
      long long int n,a,maximum=INT_MIN;
      cin>>n;
      long long int sum,multiply;
      cin>>a;
      maximum=max(a,maximum);
      sum=a;
      multiply=a;
      for(int i=1;i<n;i++)
      {
          cin>>a;
          maximum=max(a,maximum);
          sum= sum | a;
          multiply=multiply&a;
      }
      long long int x=maximum;
      long long int ans= (sum&(~x))|((~multiply)&x);
      cout<<maximum<<" ";
      cout<<ans<<endl;
   }
    return 0;
}