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
      long long int a[3];
      cin>>a[0];
      cin>>a[1];
      cin>>a[2];
      sort(a,a+3,greater<int>());
      cout<<a[0]+a[1]<<endl;
   }
    return 0;
}