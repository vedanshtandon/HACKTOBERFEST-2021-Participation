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
       long long int n,x,flag=0;
      cin>>n;
      long long int array[n];
      for(x=0;x<n;x++)
      {
          cin>>array[x];
      }
      sort(array,array+n);

      for(x=0;x<n-1;x++)
      {
          if(array[x]==array[x+1])
          {
              flag=1;
              break;
          }
      }
      if(flag==1)
      {
          cout<<"yes"<<endl;
      }
      else
      {
          cout<<"no"<<endl;
      }
   }
    return 0;
}