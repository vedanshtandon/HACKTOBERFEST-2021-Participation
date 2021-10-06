#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    long long int n, flag = 0;
    cin >> n;
    long long int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    if (n >= 2)
    {
        for (int j = 0; j < n - 1; j++)
        {
            long long int a = array[j] + array[j + 1];
            long long int p = sqrt(a);
            if (p * p == a)
            {
                continue;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && n >= 2)
        {
            cout << "YES" << endl;
            for (int i = n - 1; i >= 0; i--)
            {
                cout << array[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}