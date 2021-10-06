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
        int a1, b1, c1, a2, b2, c2;
        cin >> a1 >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        int a = 0;
        int b = 0;
        if (a1 > a2)
        {
            a = a + 1;
        }
        else
        {
            b = b + 1;
        }

        if (b1 > b2)
        {
            a = a + 1;
        }
        else
        {
            b = b + 1;
        }
        if (c1 > c2)
        {
            a = a + 1;
        }
        else
        {
            b = b + 1;
        }

        if (a > b)
        {
            cout << "A" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }
    return 0;
}
