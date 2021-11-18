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

    int t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        int n, m;
        cin >> n;
        cin >> m;
       
       // so rather than initialising the new
       // array redefine the used values
       // because using array={0} takes too much time for long arrays

        // declaring an array
        // 0 means not-visited
        // 1 means visited
        int array[n][m]={0};
        
        for (int k = 0; k < n * m; k++)
        {
            int sum = 0, x = 0, y = 0;
            for (int i = 0; i < n * m; i = i + k + 1)
            {
                x = i / m;
                y = i % m;
                array[x][y] = 1;
                sum = sum + 1;
            }
            for (int i = 0; i < n * m; i = i + k + 1)
            {
                x = i / n;
                y = i % n;
                if (array[y][x] == 0)
                {
                    sum = sum + 1;
                }
            }
            for (int i = 0; i < n * m; i = i + k + 1)
            {
                x = i / m;
                y = i % m;
                array[x][y] = 0;
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}