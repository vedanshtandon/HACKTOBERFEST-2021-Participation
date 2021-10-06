#include <bits/stdc++.h>
using namespace std;
#define lli long long int
char ch[10000007];
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
        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a = ch[i] + ch[n - i - 1] - 192;
            if (a > 26)
            {
                a = a - 26;
            }
             
            cout<<(char)(96+a);
        }
        cout << endl;
    }
    return 0;
}