// need optimization
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
        long long int n;
        cin >> n;
        int array[n][5];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin >> array[i][j];
            }
        }

        if (n == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            // int flag = 0;
            // int lastsuperior = 0;
            // for (int i = 0; i < n; i++)
            // {
            //     int count = 0;
            //     for (int j = 0; j < n; j++)
            //     {
            //         if (i != j)
            //         {
            //             int a = 0;
            //             for (int k = 0; k < 5; k++)
            //             {
            //                 if (array[i][k] < array[j][k])
            //                 {
            //                     a = a + 1;
            //                 }
            //             }
            //             if (a >= 3)
            //             {
            //                 count = count + 1;
            //             }
            //         }
            //         if (count == n - 1)
            //         {
            //             flag = 1;
            //             cout << i + 1 << endl;
            //             break;
            //         }
            //     }
            // }
            // if (flag == 0)
            // {
            //     cout << "-1"<<endl;
            // }

            int res = -1, max = 0;
            for (int i = 1; i < n; i++)
            {
                int num = 0;
                for (int j = 0; j < 5; j++)
                {
                    if (array[i][j] < array[max][j])
                    {
                        num = num + 1;
                    }
                }
                if (num >= 3)
                {
                    max = i;
                }
            }

            int i;
            for (i = 0; i < n; i++)
            {
                int num = 0;
                if (i != max)
                {
                    for (int j = 0; j < 5; j++)
                    {
                        if (array[i][j] > array[max][j])
                        {
                            num = num + 1;
                        }
                    }
                    if(num<=2)
                    {
                        res=-1;
                        break;
                    }
                }
            }
            if(i==n)
            {
                res=max+1;
            }
            cout<<res<<endl;
        }
    }
    return 0;
}