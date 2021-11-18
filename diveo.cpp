#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
      long long int n,a,b;
      cin>>n;
      cin>>a;
      cin>>b;

      int even=0;
      int odd=0;

      while(n%2==0)
      {
          even++;
          n=n/2;
      }
      for(int i=3;i*i<=n;i++)
      {
          while(n%i==0)
          {
              odd++;
              n=n/i;
          }
      }
      if(n>2)
      {
          odd++;
      }

      int answer=0;

      if(a>=0 && b>=0)
      {
          answer=(even*a)+(odd*b);
      }
      if(a<=0 && b<=0)
      {
          if(n%2==0)
          {
              answer=a;
          }
          else
          {
              answer=b;
          }
      }
      if(a>=0 && b<=0)
      {
          if(n%2==0)
          {
          answer=even*a;
          }
          else
          {
              answer=b;
          }
      }
      if(a<=0 && b>=0)
      {
          if(n%2==0)
          {
          answer=(odd*b)+a;
          }
          else
          {
              answer=(odd*b);
          }
      }
      cout<<answer<<endl;
   }
    return 0;
}