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
     int sum=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]>=48 && s[i]<=57)
         {
             sum=sum+(s[i]-48);
         }
     }
     cout<<sum<<endl;
   }
    return 0;
}