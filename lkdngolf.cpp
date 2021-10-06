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
      long long int n,x,k,flag=0,i;
      cin>>n;
      cin>>x;
      cin>>k;
      if(x%k==0)
      {
          flag=1;
      }
      if((n+1-x)%k==0)
      {
          flag=1;
      }
      if(flag==1)
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