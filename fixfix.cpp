#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    lli t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        long long int n, k;
        cin >> n;
        cin >> k;

        if (n - k == 1)
        {
            cout << "-1" << endl;
        }
        else if(n==k)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=1;i<=k;i++)
            {
                cout<<i<<" ";
            }
            for(int i=k+2;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<k+1<<endl;
        }
    }
    return 0;
}