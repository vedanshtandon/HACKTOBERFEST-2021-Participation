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

    long long int q;
    cin>>q;
    while (q--)
    {
        long long int n, l, r;
        long long int ans = -1;
        cin >> n >> l >> r;

        if (r > n && l > n)
        {
            ans = l;
        }
        else if (n >= l && n <= r)
        {
            ans = n;
        }
        else
        {
            int minimum = INT_MAX;
            

            for (int i = r; i >=l; i--)
            {
                long long int nn=n;
                long long int sum=0;
                while (nn > 0)
                {
                    sum = sum + (nn % i);
                    nn = nn / i;
                    if (sum > minimum)
                    {
                        break;
                    }
                }
                if (sum < minimum)
                {
                    minimum = sum;
                    ans = i;
                }
                if (minimum == 1)
                {
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}