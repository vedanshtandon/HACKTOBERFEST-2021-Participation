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
       long long int a,b,sum=0;
       cin>>a;
       cin>>b;
       sum=a+b;

       if(sum<3)
       {
           cout<<"1"<<endl;
       }
       if(sum>=3 && sum<=10)
       {
           cout<<"2"<<endl;
       }
       if(sum>=11 && sum<=60)
       {
           cout<<"3"<<endl;
       }
       if(sum>60)
       {
           cout<<"4"<<endl;
       }
   }
    return 0;
}
