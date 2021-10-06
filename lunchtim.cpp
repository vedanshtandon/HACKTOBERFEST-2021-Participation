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
       lli n,x,y,flag=0;
       cin>>n;
       lli height[n];
       lli c[n]={0};
        for(x=0;x<n;x++)
        {
            cin>>height[x];
        }
        for(x=0;x<n;x++)
        {
            flag=0;
            for(y=x+1;y<n;y++)
            {
                if(height[y]>height[x])
                {
                    flag=1;
                }

                if(flag==1)
                {
                   flag=0;
                   break;
                }
                if(flag==0 && height[x]==height[y])
                {
                  c[x]=c[x]+1;
                  c[y]=c[y]+1;
                }
            }
        }
        for(x=0;x<n;x++)
        {
            cout<<c[x]<<" ";
        }
        cout<<'\n';
   }
    return 0;
}