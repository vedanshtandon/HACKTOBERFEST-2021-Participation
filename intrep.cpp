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
     long long int n;
     cin>>n;
     long long int a=1;
     while(true)
     {
         if(__gcd(n+a,n-a)==1)
         {
             cout<<n+a<<" "<<n-a<<endl;
             break;
         }
         a=a+1;
     }
   }
    return 0;
}