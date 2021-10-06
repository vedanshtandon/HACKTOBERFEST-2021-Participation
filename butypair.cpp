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
        long long int n;
        cin >> n;
        vector<lli> counter(1000005,0);
        long long int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            counter[array[i]] = counter[array[i]] + 1;
        }
        long long int sum = n;
        long long int ans = 0;
        sort(array, array + n);
        for (int i = 0; i < n;)
        {
            int count = counter[array[i]];
            sum = sum - count;
            ans = ans + count * (sum);
            i=i+count;
        }
        cout << ans*2 << endl;
    }
    return 0;
}