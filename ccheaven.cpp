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
      long long int l=0,x=0,flag=0,count=0;
      double k;
      string s;
      cin>>l;
      cin>>s;
      for(x=1;x<=l;x++)
      { 
          if(s[x-1]=='1')
          {
              count=count+1;
          }
          k=0;
           k=x/2.0;
          if(count>=k)
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