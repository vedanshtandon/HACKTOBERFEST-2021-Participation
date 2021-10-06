#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int mod=1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

       long long int n,x,sum=0,sum1=0,q=0,k=0;
      cin>>n;
      long long int array[n];
      for(x=0;x<n;x++)
      {
          cin>>array[x];
          sum=(sum+array[x]+mod)%mod;
      }
      sum1=sum;
      cin>>q;
      for(x=0;x<q;x++)
      {
          cin>>k;
      }
      sum=sum%mod;
      for(x=1;x<=q;x++)
      {
          sum=(2*sum)%mod;
          cout<<sum<<endl;
      }
    return 0;
}