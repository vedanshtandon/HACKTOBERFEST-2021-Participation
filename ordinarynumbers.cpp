#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    lli t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        long long int n,ans=0,i;
        cin>>n;
        for(int ex=1;ex<=n;ex=(ex*10)+1)
        {
            for(int i=1;i<=9;i++)
            {
                if(ex*i <= n)
                {
                    ans=ans+1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}