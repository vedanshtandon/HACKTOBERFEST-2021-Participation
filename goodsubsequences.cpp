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

    long long int t;
    cin >> t;
    long long int m = 1e9 + 7;
    while (t--)
    {
        long long int ans = 1;
        string s;
        cin >> s;

        int n = s.size();
        unordered_map<char, int> map;

        for (int i = 0; i < n; i++)
        {
            map[s[i]]++;
        }

        for (int i = 90; i <= 122; i++)
        {
            int a = map[i];
            if (a != 0)
            {
                ans = (ans * a) % m;
            }
        }
        cout << ans << endl;
    }
    return 0;
}