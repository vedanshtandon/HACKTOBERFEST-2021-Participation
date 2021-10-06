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
        char array1[n];
        char array2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array1[i];
            array2[i] = array1[i];
        }
        sort(array1, array1 + n);
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (array1[i] != array2[i])
            {
                k = k + 1;
            }
        }
        cout << k << endl;
    }
    return 0;
}