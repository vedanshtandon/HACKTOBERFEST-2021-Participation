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

   
    long long int S,T,a,b,c,ans=0;
    cin>>S;
    cin>>T;
    for(a=0;a<=S;a++)
    {
        for(b=0;b<=S;b++)
        {
            for(c=0;c<=S;c++)
            {
                if(a+b+c<=S  && a*b*c<=T) 
                {
                    ans=ans+1;
                }
            }
        }
    }
    cout<<ans<<endl;
   
    return 0;
}