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

    long long int n, q, x;
    cin >> n;
    cin >> q;
    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array, array + n, greater<int>());
    int jump = sqrt(n);
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        int pos = 0;
        while (pos + jump < n && array[pos+jump] > x)
        {
            pos = pos + jump;
        }
        while (pos < n && array[pos] > x)
        {
            pos = pos + 1;
        }

        if (array[pos] == x)
        {
            cout << "0" << endl;
        }
        else if (pos % 2 == 0)
        {
            cout << "POSITIVE" << endl;
        }
        else
        {
            cout << "NEGATIVE" << endl;
        }
    }
    return 0;
}
