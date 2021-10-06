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

   long long int n,ans;
   cin>>n;
   long long int array[n];
   
   for(int i=0;i<n;i++)
   {
       cin>>array[i];
   }

   
   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
          long long int pp=(array[i]*array[j])/__gcd(array[i],array[j]);
          ans=__gcd(pp,ans);
      }
   }
   cout<<ans<<endl;
    return 0;
}