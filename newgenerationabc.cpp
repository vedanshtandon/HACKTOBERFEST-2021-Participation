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
    if(n>=1 && n<=125)
    {
        cout<<4<<endl;
    }
    else if(n>=126 && n<=211)
    {
        cout<<6<<endl;
    }
    else
    {
        cout<<8<<endl;
    }
    return 0;
}