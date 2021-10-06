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
      long long int D,d,A,B,C;
      cin>>D;
      cin>>d;
      cin>>A;
      cin>>B;
      cin>>C;
      
      long long int k;

      k=d*D;

      if(k>=42)
      {
          cout<<C<<endl;
      }
      else if(k>=21)
      {
          cout<<B<<endl;
      }
      else if(k>=10)
      {
          cout<<A<<endl;
      }
      else
      {
          cout<<"0"<<endl;
      }

   }
    return 0;
}