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

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
     long long int n;
     cin>>n;
     long long int array[n];
     long long int price[n];
     for(int i=0;i<n;i++)
     {
         cin>>array[i];
     }
     sort(array,array+n);
     for(int i=0;i<n;i++)
     {
         price[i]=(array[i]*(n-i));
     }
     cout<<*max_element(price,price+n)<<endl;
   }
    return 0;
}