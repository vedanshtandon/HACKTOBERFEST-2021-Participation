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
     long long int n,sum=0,a=0;
     string s;
     cin>>n;
     cin>>s;
     for(int i=0;i<n-1;i++)
     {
         sum=sum+(s[i]-48);
         if(s[i]!='0')
         {
             a=a+1;
         }
     }
     sum=sum+s[n-1]-48;
     long long int ans=sum+a;
     cout<<ans<<endl;
   }
    return 0;
}