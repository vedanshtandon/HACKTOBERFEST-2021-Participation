#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    lli t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        long long int n;
        cin>>n;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << "-1" << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == j)
                    {
                        cout << "-1"<< " ";
                    }
                    else
                    {
                        cout<<"1"<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}