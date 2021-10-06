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
      long long int n,d,h;
      cin>>n;
      cin>>d;
      cin>>h;
      long long int array[n];
      for(int i=0;i<n;i++)
      {
          cin>>array[i];
      }
      int sum=0;
      int flag=0;

      for(int i=0;i<n;i++)
      {
          if(array[i]>0)
          {
              sum=sum+array[i];
          }
          if(array[i]==0)
          {
              if(sum>d)
              {
                  sum=sum-d;
              }
              else
              {
                  sum=0;
              }
          }

          if(sum>h)
          {
              flag=1;
              break;
          }
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