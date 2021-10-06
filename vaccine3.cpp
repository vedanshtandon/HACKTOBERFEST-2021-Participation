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
      long long int g ,p ,a,x, sum_min=0,sum_max=0;
      cin>>g;
      cin>>p;
      for(x=1;x<=10;x++)
      {
          cin>>a;
          if(x>=g)
          {
              sum_max=sum_max+a;
          }

          if(x>g)
          {
              sum_min=sum_min+a;
          }
      }
      
      long long int k;
      k=((sum_min)/p) + +1;

      cout<<k<<" ";

      if(sum_max%p==0)
      {
          cout<<sum_max/p<<endl;
      }
      else
      {
          cout<<((sum_max/p ) +1 )<<endl;
      }

   }
    return 0;
}