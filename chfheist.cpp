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
       long long int D,d,P,Q,x,set=0,k=0,sum=0;
       cin>>D;
       cin>>d;
       cin>>P;
       cin>>Q;

       set=D/d;
        
        sum= (set*P) + ((set-1)*(set)*Q)/2;

        sum=sum*d+ (D-(set*d))*(P +(set*Q));

        cout<<sum<<endl;
   }
    return 0;
}

