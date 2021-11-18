#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    // for this question the prime numbers will have diiferent valuses
    // and non -prime number will have different values
    long long int n;
    cin >> n;


        int prime[n + 5] = {0};
        for (int i = 2; i * i <= n + 1; i++)
        {
            if (prime[i] == 0)
            {
                for (int j = i * i; j <= n + 1; j = j + i)
                {
                    prime[j] = 1;
                }
            }
        }

        if(n<3)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        for (int i = 2; i <= n + 1; i++)
        {
            cout << prime[i] + 1 << " ";
        }
        cout << endl;

    return 0;
}