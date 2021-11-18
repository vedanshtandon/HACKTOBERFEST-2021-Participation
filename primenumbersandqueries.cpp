#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int prime[1000001] = {0};
    prime[0]=1;
    prime[1]=1;
    for (int i = 2; i * i <= 1000000; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=1000000;j=j+i)
            {
                prime[j]=1;
            }
        }
    }

    int back_prime[1000001];
    int front_prime[1000001];
    int a=0;
    for(int i=0;i<1000001;i++)
    {
        if(prime[i]==0)
        {
            a=i;
        }
        back_prime[i]=a;
    }
    a=1000003;
    for(int i=1000000;i>=0;i--)
    {
        if(prime[i]==0)
        {
            a=i;
        }
        front_prime[i]=a;
    }


    int t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
         int l, r;
        cin>>l;
        cin>>r;
        int ll=front_prime[l];
        int rr=back_prime[r];
        int ans=0;
        if(rr>=l && ll<=r) 
        {
            ans=back_prime[rr]-front_prime[ll];
        }
        cout<<ans<<"\n";
    }
    return 0;
}




// the key to rectify TLE id use fast input output
// and use \n over endl