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
        long long int a, b, c, d, e;
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        cin >> e;

        if (a <= e && b + c <= d)
        {
            cout << "YES" << endl;
        }
        else if (b <= e && a + c <= d)
        {
            cout << "YES" << endl;
        }
        else if (c <= e && a + b <= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}