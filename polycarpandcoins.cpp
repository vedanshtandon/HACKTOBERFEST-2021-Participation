//codeforces
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
       long long int n;
       cin>>n;

       long long int a=n/3;
       if(n%3==0)
       {
           cout<<a<<" "<<a<<endl;
       }
       if(n%3==1)
       {
           cout<<a+1<<" "<<a<<endl;
       }
       if(n%3==2)
       {
           cout<<a<<" "<<a+1<<endl;
       }
   }
    return 0;
}