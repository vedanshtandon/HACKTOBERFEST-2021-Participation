#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
     unsigned long long int a,b;
     cin>>a;
     cin>>b;
        long long int d = b-a+1;
        long long int ans = d/3;
        int dif = d%3;
        if((dif==1 && b%3==0) || (dif==2 && (b%3==0 || (b-1)%3==0)))ans++;
        cout<<ans<<endl;
   }
    return 0;
}