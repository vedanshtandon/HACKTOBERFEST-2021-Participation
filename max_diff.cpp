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
       long long int n,s;
       cin>>n;
       cin>>s;
       if(n>=s)
       {
           cout<<s<<endl;
       }
       else
       {
           long long int a=abs(s-(2*n));
           cout<<a<<endl;
       }
   }
    return 0;
}
