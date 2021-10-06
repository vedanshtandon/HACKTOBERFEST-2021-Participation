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
        long long int sum = 0;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin>>array[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            sum=sum+ abs(array[i+1]-array[i]);
        }
        sum=sum-(n-1);
        cout<<sum<<endl;
    }
    return 0;
}