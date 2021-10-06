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
      long long int x1,x2,y1,y2;
      cin>>x1;
      cin>>y1;
      cin>>x2;
      cin>>y2;

      long long int num=0,sum=0;
      long long int i;

      for(i=1;i<=x2;i++)
      {
          if(i==1)
          {
              num= (y1*(y1-1)/2) +1;
          }
          else{
              num=num+y1+i-1;
          }

          if(i>=x1)
          {
              sum=sum+num;
          }
      }
       num=0;

       for(i=1;i<=y2;i++)
       {
           if(i==1)
           {
               num= (x2*(x2+1))/2;
           }
           else
           {
               num=num+x2+i-2;
           }

           if(i>y1)
           {
               sum=sum+num;
           }
       }

       cout<<sum<<endl;
   }
    return 0;
}