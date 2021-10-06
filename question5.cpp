#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    lli t, z;
    cin >> t;

    int array[100005] = {0};
    int digit[10] = {0};
    for (int i = 2; i*i<=100005; i++)
    {
        if (array[i] == 0)
        {
            for (int j = i * i; j < 100004; j = j + i)
            {
                array[j] = 1;
            }
        }
    }
    for (int i = 2; i < 100000; i++)
    {
        if (array[i] == 0)
        {
            int a = i % 10;
            digit[a]++;
        }
    }

    for (z = 1; z <= t; z++)
    {
        long long int n, ans = 0;
        cin >> n;
        cout << digit[n] << endl;
    }
    return 0;
}