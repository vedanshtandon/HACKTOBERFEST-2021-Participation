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
     string s;
     cin>>s;
     long long int n=s.length();
     if(n>10)
     {
         cout<<s[0]<<n-2<<s[n-1]<<endl;
     }
     else
     {
         cout<<s<<endl;
     }
   }
    return 0;
}