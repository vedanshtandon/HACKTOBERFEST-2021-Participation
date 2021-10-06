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
        unsigned long long int x, y, sum = 0, flag = 0,r=0;
        cin >> x;
        cin >> y;
        int m = y % x;
        if (m == 0)
        {
            while (flag == 0)
            {
                double p;
                int d;
                p = log((x + y) / x) / log(2);
                d = (int)p;

                long long int k = x * (pow(2, d) - 1);
                if (d != r)
                {
                    if (k == y)
                    {
                        sum = sum + d;
                        cout << sum << endl;
                        flag=1;
                    }
                    else
                    {
                        y = y - k;
                        sum = sum + d + 1;
                        r=d;
                    }
                }
                else
                {
                    cout << "-1" << endl;
                    flag=1;
                }
            }
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}