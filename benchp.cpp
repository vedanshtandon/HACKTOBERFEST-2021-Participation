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
       long long int n,x,y,w,wr,flag=0,sas,sum=0;
      cin>>n;
      cin>>w;
      cin>>wr;
      sas=wr;
      long long int array[n];
      long long int count[200000]={0};
      for(x=0;x<n;x++)
      {
          cin>>array[x];
          count[array[x]]++;
          sum=sum+array[x];
      }
      if(wr>=w)
      {
          cout<<"YES"<<endl;
      }
      else if(sum+wr<w)
      {
          cout<<"NO"<<endl;
      }
      else
      {
      for(x=0;x<n;x++)
      {
          if(count[array[x]]%2==0)
          {
              sas=sas + array[x]*2;
              if(sas>=w)
              {
                  flag=1;
                  break;
              }
          }
      }
      if(flag==1){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
      }
   }
    return 0;
}