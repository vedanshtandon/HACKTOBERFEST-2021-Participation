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
      long long int n,m,k;
      cin>>n;
      cin>>m;
      cin>>k;
      long long int p=(n*m)/2  - k;
      long long int max_horizontal=0;
      long long int max_vertical=0;
      max_horizontal=(m-1)*n;
      max_vertical=m*(n-1);

      if(k<=max_horizontal && p<=max_vertical  ) 
      {
         cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
   }
    return 0;
}