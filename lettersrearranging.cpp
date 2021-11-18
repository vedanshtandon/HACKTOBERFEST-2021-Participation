#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    lli t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        string s;
        string rs = "";
        cin >> s;
        int flag = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
    }
    return 0;
}