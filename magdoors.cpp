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
       long long int n,ans=0;
     string s;
     cin>>s;
     n=s.length();

     for(int i=0;i<n;i++)
     {
         if(ans%2==0)
         {
             if(s[i]=='0')
             {
                 ans=ans+1;
             }
         }
         else
         {
             if(s[i]=='1')
             {
                 ans=ans+1;
             }
         }
     }
     cout<<ans<<endl;
   }
    return 0;
}