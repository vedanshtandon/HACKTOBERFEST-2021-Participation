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
     long long int a,b,c,d;
     cin>>a;
     cin>>b;
     cin>>c;
     cin>>d;

     if(a+b+c<=d)
     {
         cout<<"1"<<endl;
     }
     else if((a+b<=d)||(b+c<=d)||(a+c<=d))
     {
         cout<<"2"<<endl;
     }
     else
     {
         cout<<"3"<<endl;
     }
   }
    return 0;
}