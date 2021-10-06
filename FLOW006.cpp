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
      long long int n;
      cin>>n;
      int sum=0;
      while(n!=0)
      {
          sum=sum+(n%10);
          n=n/10;
      }
      cout<<sum<<endl;
   }
    return 0;
}