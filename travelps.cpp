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
      long long int n,a,b,sum=0;
      cin>>n;
      cin>>a;
      cin>>b;
      char ch[n];
      cin>>ch;
      for(int i=0;i<n;i++)
      {
          if(ch[i]=='0')
          {
             sum=sum+a;
          }
          else
          {
              sum=sum+b;
          }
      }
      cout<<sum<<endl;
   }
    return 0;
}