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
     long long int x,y,a,b;
     cin>>a;
     cin>>b;

     if(a>b)
     {
         x=b;
         y=a;
     }
     else
     {
         y=b;
         x=a;
     }
      
      if(y%x==0 || __gcd(x,y)!=1)
      {
          cout<<"0"<<endl;
      }
      else if(((y%2==0)&&(x%2==1)) || ((y%2==1)&&(x%2==0)))
      {
          cout<<"1"<<endl;
      }
      else
      {
          if(__gcd(x+1,y)!=1)
          {
              cout<<"1"<<endl;
          }
          else if(__gcd(x,y+1)!=1)
          {
              cout<<"1"<<endl;
          }
          else
          {
              cout<<"2"<<endl;
          }

      }
   }
    return 0;
}