#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    lli t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        /*
        we have given n*a==b^k
        means (b^k)%a must be equal to 0
        so,
        all the find prime factors of a
        and b%p==0 if not answer ==NO
        else YES
     */

        long long int a, b, n;
        cin >> a;
        cin >> b;
        n = a;
        // finding prime factors
        vector<int> prime_factors;
        while (n % 2 == 0)
        {
            prime_factors.push_back(2);
            n = n / 2;
        }
        for (int i = 3; i * i <= n; i = i + 2)
        {
            while (n % i == 0)
            {
                n = n / i;
                prime_factors.push_back(i);
            }
        }
        if (n > 2)
        {
            prime_factors.push_back(n);
        }
        int flag = 0;
        for (int i = 0; i < prime_factors.size(); i++)
        {
            if (b % prime_factors[i] != 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
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