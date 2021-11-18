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
        string s = "";
        char ch[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ch[i];
            if (ch[i] != '.')
            {
                s = s + ch[i];
            }
        }
        int flag = 0;
        if (s.length() % 2 == 0)
        {
            for (int i = 0; i < s.length(); i = i + 2)
            {
                if (s[i] == 'H' && s[i + 1] == 'T')
                {
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        else
        {
            flag = 1;
        }

        if (flag == 1)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            cout << "Valid" << endl;
        }
    }
    return 0;
}