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
       long long int a,b;
       cin>>a;
       cin>>b;
       long long int minimum=min(a,b);
       long long int maximum=max(a,b);
 
        if(a==b)
        {
            cout<<"0"<<endl;
        }
        else
        {
            long long int x;
            if(a>b)
            {
                x=a-1;
            }
            else
            {
                x=b-1;
            }
            long long int sol= ceil((b-x)/2.0)+ceil((x-a)/2.0);
            cout<<sol<<endl;
        }
             
       
   }
    return 0;
}
