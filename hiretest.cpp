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
        long long int n, m, u, p, f, x, y, pp,i;
        cin >> n;
        cin >> m;
        cin >> i;
        cin >> y;
        char ch;
        for (pp = 0; pp < n; pp++)
        {
            u=0;
            p=0;
            f=0;
            for (x = 0; x < m; x++)
            {
                cin >> ch;
                if (ch == 'U')
                {
                    u++;
                }
                else if (ch == 'P')
                {
                    p++;
                }
                else
                {
                    f++;
                }
            }
            if (f>= i || (f>=(i-1) && p>=y))
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    return 0;
}