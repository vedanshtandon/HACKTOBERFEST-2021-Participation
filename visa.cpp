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
       int x1,x2,y1,y2,z1,z2;
       cin>>x1;
       cin>>x2;
       cin>>y1;
       cin>>y2;
       cin>>z1;
       cin>>z2;

       if(x2>=x1 && y2>=y1 &&  z2<=z1)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
    return 0;
}

