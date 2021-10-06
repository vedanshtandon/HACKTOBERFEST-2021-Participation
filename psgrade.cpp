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
       lli a_min,b_min,c_min,t_min,a,b,c,total;
       cin>>a_min;
       cin>>b_min;
       cin>>c_min;
       cin>>t_min;
       cin>>a;
       cin>>b;
       cin>>c;
       total=a+b+c;
       if((a_min<=a)&&(b_min<=b)&&(c_min<=c)&&(t_min<=total))
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