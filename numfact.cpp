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
       long long int n,m,x,i,j,p,k,fac=1;
      long long int count[10007]={0};
      long long int spf[10007]={0};
          for(i=2;i<=10000;i++)
          {
              spf[i]=i;
          }
          for(i=2;i<=10000;i++)
          {
              if(spf[i]==i)
              {
                  for(j=i*i;j<=10000;j=j+i)
                  {
                      spf[j]=i;
                  }
              }
          }
      cin>>n;
      for(x=0;x<n;x++)
      {
          cin>>m;
          p=m;
          
           while(p!=1)
           {
              k=spf[p];
            count[k]=count[k]+1;
             p=p/spf[p];
          }
      }
      for(x=1;x<=10000;x++)
      {
         fac=fac*(count[x]+1);
      }
     cout<<fac<<endl;
   }
    return 0;
}