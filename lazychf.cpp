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
      long long int x,m,d;
      cin>>x;
      cin>>m;
      cin>>d;
      long long int days_delay=0,chef_delay=0;
      days_delay=d+x;
      chef_delay=m*x;

      if(chef_delay<=days_delay)
      {
          cout<<chef_delay<<endl;
      }
      else
      {
          cout<<days_delay<<endl;
      }
   }
    return 0;
}