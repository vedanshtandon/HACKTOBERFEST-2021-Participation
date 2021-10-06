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


    long long int n;
    cin >> n;
    if (n == 0)
    {
        cout << "YES" << endl;
    }
    else if (n == 1)
    {
        cout << "NO" << endl;
    }
    else if (n == 2)
    {
        cout << "NO" << endl;
    }
    else if (n == 3)
    {
        cout << "YES" << endl;
    }
    else if (n == 4)
    {
        cout << "NO" << endl;
    }
    else if (n == 5)
    {
        cout << "YES" << endl;
    }
    else if (n == 6)
    {
        cout << "YES" << endl;
    }
    else if (n == 7)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout<< "YES"<<endl;
    }
    return 0;
}