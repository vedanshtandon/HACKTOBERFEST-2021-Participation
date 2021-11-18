#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, n;
        cin >> x;
        cin >> n;
        long long int ans = 0;
        int a = n % 4;
        
            if (a == 0)
            {
                ans = 0;
            }
            else if (a == 1)
            {
                ans = -n;
            }
            else if (a == 2)
            {
                ans = 1;
            }
            else
            {
                ans = n+1;
            }
        

        if(x%2==0)
        {
            ans=ans+x;
        }
        else
        {
            ans=x-ans;
        }
        cout<<ans<<endl;
    }
    return 0;
}