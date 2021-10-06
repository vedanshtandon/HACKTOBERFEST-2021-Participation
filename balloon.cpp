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
       int n,a,flag=1,i,m=0,ans;
       cin>>n;
       int problem[7]={0};
       int array[n];
       
       for(i=0;i<n;i++)
       {
           cin>>array[i];

           if(array[i]>=1 && array[i]<=7)
           {
               problem[array[i]-1]=1;
           }

           if(m==0 && problem[0]==1 && problem[1]==1 && problem[2]==1 && problem[3]==1 && problem[4]==1 && problem[5]==1 && problem[6]==1)
           {
               m=1;
               ans=i+1;
           }
       }
       cout<<ans<<endl;
   }
    return 0;
}

