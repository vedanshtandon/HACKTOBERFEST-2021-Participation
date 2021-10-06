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
      long long int n,k,x,p,max,sum=0,d=0;
      cin>>n;
      cin>>k;
      long long int array[n];
      for(x=0;x<n;x++)
      {
         cin>>array[x];
      }

      for(x=1;x<=k;x++)
      {
          long long int a[100005]={0};
          d=0;
          p=x;
          while(p<=n)
          {
            int m=array[p-1];

            a[m]=a[m]+1;
            p=p+k;
            d=d+1;
          }
          p=x;
          max=a[array[x-1]];
           while(p<=n)
          {
            int m=array[p-1];
            if(max<a[m])
            {
                 max=a[m];
            }
            p=p+k;
          }

           sum=sum+d-max;
          
      }
      cout<<sum<<endl;
   }
    return 0;
}