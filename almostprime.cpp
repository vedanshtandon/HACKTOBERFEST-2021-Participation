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

    long long int p;
    cin>>p;
    // variable p to store answer
    int ans=0;
    for(int j=2;j<=p;j++)
    {
        long long int n=j;
        int a=0;
        // finding the prime factorization of each j
        if(n%2==0)
            a=a+1;

        while(n%2==0)
        {
            n=n/2;
        }

        for(int i=3;i*i<=n;i++)
        {
            if(n%i==0)
                a=a+1;

            while(n%i==0)
            {
                n=n/i;
            }
        }
        if(n>2)
           a++; 
        
        // if number of prime factors is greater than 2 than ans ++
        if(a==2)
            ans=ans+1;
    }
    cout<<ans<<endl;
    return 0;
}