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

    long long int n,k,w;
    cin>>k;
    cin>>n;
    cin>>w;

    long long int friend_dollar=0;
    long long int amt=(k*w*(w+1))/2;

    if(n>= amt)
    {
        cout<<"0"<<endl;
    }
    else{
        long long int ans=amt-n;
        cout<<ans<<endl;
    }
    return 0;
}