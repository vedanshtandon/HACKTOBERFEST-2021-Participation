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
     lli n,x,i,a=0;
     cin>>n;
     cin>>x;
     lli rating[n];
     lli space[n];
     lli copy[n]={0};
      for(i=0;i<n;i++)
      {
          cin>>space[i];
          cin>>rating[i];
          if(space[i]<=x)
          {
              copy[a]=rating[i];
              a=a+1;
          }
      }
      sort(copy,copy+n);
      cout<<copy[n-1]<<endl;
   }
    return 0;
}