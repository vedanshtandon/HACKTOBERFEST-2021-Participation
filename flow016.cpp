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
        long long int  a, b;
        cin >> a;
        cin >> b;
        long long int hcf=__gcd(a,b);
        long long int lcm=(a*b)/hcf;
        cout <<  hcf<< " " <<  lcm<< endl;
    }
    return 0;
}