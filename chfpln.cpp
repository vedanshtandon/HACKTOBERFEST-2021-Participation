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
      long long int n;
      cin>>n;
      long long int array[100005]={0};
      long long int maximum_points[100005]={0};

      for(int i=2;i<100005;i++)
      {
          maximum_points[i]=i-1;
      }
       long long int a=0;
      for(int i=0;i<n;i++)
      {
          cin>>a;
          array[a]=array[a]+1;
      }
       long long int ans=0;
      for(int i=0;i<100005;i++)
      {
         if(maximum_points[i]<array[i])
         {
             ans=ans+maximum_points[i];
         }
         else
         {
             ans=ans+array[i];
         }
      }
      cout<<ans<<endl;
   }
    return 0;
}