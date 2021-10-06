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
      long long int a,b,c;
      long long int left=0,right=0;
      cin>>a;
      cin>>b;
      cin>>c;
      if(a==0)
      {
          left=left+1;
      }
      else
      {
          right=right+1;
      }

      if(b==0)
      {
          left=left+1;
      }
      else
      {
          right=right+1;
      }

      if(c==0)
      {
          left=left+1;
      }
      else
      {
          right=right+1;
      }



        if(left>=1 && right>=1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
   }
    return 0;
}