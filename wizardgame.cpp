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

   long long int n,a,b,k,t,ans=0;
   cin>>n;
   cin>>a;
   cin>>b;
   cin>>k;
   cin>>t;
   long long int array[n];
   long long int ppp=(-1)*(t*b);
   for(int i=0;i<n;i++)
   {
       array[i]=ppp;
   }
   for(int i=0;i<t;i++)
   {
       long long int m;
       cin>>m;
       for(int i=0;i<m;i++)
       {
           long long int g;
           cin>>g;
           array[g-1]=array[g-1]+a+b;
       }
   }
   for(int i=0;i<n;i++)
   {
       if(array[i]>=k)
       {
           ans=ans+1;
       }
   }
   cout<<ans<<endl;
    return 0;
}