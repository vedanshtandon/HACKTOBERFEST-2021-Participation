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
       int d,x,y,zz,work1,work2;
       cin>>d;
       cin>>x;
       cin>>y;
       cin>>zz;
       work1=7*x;
       work2=(d*y)+(7-d)*zz;
       if(work1>work2)
       {
           cout<<work1<<endl;
       }
       else
       {
           cout<<work2<<endl;
       }
   }
    return 0;
}

