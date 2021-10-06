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

   long long int n,a,b;
   cin>>n;
   cin>>a;
   cin>>b;
   int array[n];
   for(int i=0;i<a;i++)
   {
       int p;
       cin>>p;
       array[p-1]=1;
   }
   for(int i=0;i<b;i++)
   {
       int p;
       cin>>p;
       array[p-1]=2;
   }
   for(int i=0;i<n;i++)
   {
       cout<<array[i]<<" ";
   }
   cout<<endl;
    return 0;
}