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
       long long int n,m;
       cin>>n;
       cin>>m;
       char a,b;
       int c,res=0;
       cin>>a;
       if(a=='0')
       {
           res=0;
       }
       else
       {
           res=1;
       }
       for(int i=2;i<=n*m;i++)
       {
           cin>>b;
           if(b=='0')
       {
           res=res^0;
       }
       else
       {
           res=res^1;
       }
       }
       if(res==1)
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

