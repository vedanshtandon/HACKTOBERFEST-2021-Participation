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
      long long int a,b,c,d,k,sum=0,result=0;
      cin>>a;
      cin>>b;
      cin>>c;
      cin>>d;
      cin>>k;

      sum= abs(a-c) +abs(b-d);
      result=k-sum;

      if(result%2==0 && sum<=k)
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