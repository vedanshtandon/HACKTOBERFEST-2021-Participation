#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    lli t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        long long int n, x;
        cin >> n;
        cin >> x;
        map<int, int> mp1;
        map<int, int> mp2;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp1[a[i]]++;
            mp2[a[i] ^ x]++;
        }
        int maxAns = 0, minAns = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            maxAns = max((mp1[a[i]] + mp2[a[i]]), maxAns);
        }

        if (x != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if ((mp1[a[i]] + mp2[a[i]]) == maxAns)
                {
                    minAns = min(minAns, mp2[a[i]]);
                }
            }
        }
        else
        {
            maxAns=maxAns/2;
            minAns=0;
        }
        cout << maxAns << " " << minAns << endl;
    }
    return 0;
}