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
        long long int n;
        cin >> n;

        long long int x = 0;
        while (true)
        {
            if (pow(2, x + 1) <= n)
            {
                x++;
            }
            else
            {
                break;
            }
        }
        long long int k = pow(2, x);
        long long int ans = max(n + 1 - k, k / 2);
        cout << ans << endl;
    }
    return 0;
}