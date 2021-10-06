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
        long long int n,indicator=0;
        cin>>n;
        if(n==2)
        {
            cout<<"Arjit"<<endl;
        }
        else
        {
            cout<<"Deepa"<<endl;
        }
    }
    return 0;
}