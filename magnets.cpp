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

   long long int  t,z;
   long long int ans=0;
   cin>>t;
   vector<char> v;
   for(z=1;z<=t;z++)
   {
       string s;
       cin>>s;
       v.push_back(s[0]);
       v.push_back(s[1]);
   }
   for(int i=0;i<2*t-1;i++)
   {
       if(v[i]==v[i+1])
       {
           ans++;
       }
   }
   cout<<ans+1<<endl;
    return 0;
}