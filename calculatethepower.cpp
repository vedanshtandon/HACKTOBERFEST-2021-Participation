#include <bits/stdc++.h>
using namespace std;
long long int m=1000000007;
#define lli long long int

long long int power(long long int a,long long int b)
{
    
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    if(b%2==0)
    {
        long long int k=(a*a)%m;
        return power(k,b/2)%m;
    }
    else
    {
        long long int k=(a*a)%m;
        return  ((a%m)*(power(k,(b-1)/2)%m))%m;
    }
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

     long long int a,b;
     cin>>a;
     cin>>b;
     long long int answer=power(a,b)%m;
     cout<<answer<<endl;
    return 0;
}