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
        vector<long long int> array;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            array.push_back(a);
        }

        long long int minimum = *min_element(array.begin(), array.end());
        long long int counter = count(array.begin(), array.end(), minimum);
        long long int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] == minimum)
            {
                continue;
            }
            else
            {
                long long int pp = ceil(array[i] / 2.0) - 1;

                if (minimum >= 0 && minimum <= pp)
                {
                    flag=0;
                    continue;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << n - counter << endl;
        }
    }
    return 0;
}