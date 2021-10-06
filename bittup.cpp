#include <bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
#define lli long long int
long long helper(int R,int N)
{
    if(N==0)
        return 1;
    long long temp=helper(R,N/2)%mod;
    if(N%2==0)
        return (temp*temp)%mod;
    return (((temp*temp)%mod)*R)%mod;
}
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
       long long int n,m;
       cin>>n;
       cin>>m;
  
  long long int ans1,ans2;

  ans1=(helper(2,n)%mod -1);

  ans2=helper(ans1,m);
  cout<<ans2<<endl;

   }
    return 0;
}

