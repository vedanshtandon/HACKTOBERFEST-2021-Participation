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
       lli n,x,sum=0,flag=0;
       cin>>n;
       lli array[n];
       for(x=0;x<n;x++)
       {
           cin>>array[x];
           sum=sum+array[x];
           if(array[x]==2)
           {
               flag=1;
           }
       }
       if(sum%2==0)
       {
           cout<<"0"<<endl;
       }
       else
       {
           if(flag==1)
           {
               cout<<"1"<<endl;
           }
           else
           {
               cout<<"-1"<<endl;
           }
       }
   }
    return 0;
}