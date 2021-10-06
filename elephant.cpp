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

   long long int sum=0,n;
   cin>>n;

   for(int i=5;i>=1;i--)
   {
       sum=sum +(n/i);
       n=n%i;
   }
   cout<<sum<<endl;
    return 0;
}