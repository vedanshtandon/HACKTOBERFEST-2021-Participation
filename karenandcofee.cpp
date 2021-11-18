#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

    // wonderful question based on the difference array concept
    // it updates multiple queries of an array in O(n) 
    // Time complexity
    // highly useful cocept

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int n, k, q;
    long long int x = 0;
    long long int p = 0;
    int v[200004] = {0};
    int a[200004] = {0};

    cin >> n;
    cin >> k;
    cin >> q;

    // updation by difference array concept
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l;
        cin >> r;

        v[l] = v[l] + 1;
        v[r + 1] = v[r + 1] - 1;
    }
    // array a will store the count of preexisting values of k
    for (int i = 0; i < 200004; i++)
    {
        x = x + v[i];
        a[i] = p;

        // if greater than k than will be counted
        if (x >= k)
        {
            p=p+1;
        }
    }
    // for each query answer in O(1)
    for (int i = 0; i < q; i++)
    {
        int aa, bb;
        cin >> aa;
        cin >> bb;

        cout << a[bb + 1] - a[aa] << endl;
    }
    return 0;
}