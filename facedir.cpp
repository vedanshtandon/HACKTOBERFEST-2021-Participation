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
     if(n%4==0)
     {
         cout<<"North"<<endl;
     }
     else if(n%4==1)
     {
         cout<<"East"<<endl;
     }
     else if(n%4==2)
     {
         cout<<"South"<<endl;
     }
     else
     {
         cout<<"West"<<endl;
     }
   }
    return 0;
}