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

    long long int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    long long int ans=1,count=1,p=0;
    
    for(int i=0;i<n-1;i++)
    {
        if(array[i]<=array[i+1])
        {
            count=count+1;
        }
        else
        {
            ans=max(count,ans);
            count=1;
        }
    }
    ans=max(ans,count);
    
    cout<<ans<<endl;
    return 0;
}