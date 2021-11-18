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
      long long int n, m,k;
      cin>>n;
      cin>>m;
      cin>>k;

      int flag1=0;
      int flag2=0;

      for(int i=0;i<n;i++)
      {
        int a;
        cin>>a;
        if(a==0 && i<m)
        {
            flag1=1;
        }
        if(a==0)
        {
            flag2=1;
        }
      }

      if(flag2==0)
      {
          cout<<"100"<<endl;
      }
      else if(flag1==1)
      {
          cout<<"0"<<endl;
      }
      else
      {
          cout<<k<<endl;
      }
   }
    return 0;
}