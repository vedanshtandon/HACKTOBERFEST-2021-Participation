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

   long long int n,k;
   cin>>n;
   cin>>k;
   long long int array[n];
   for(int i=0;i<n;i++)
   {
       cin>>array[i];
   }
   sort(array,array+n,greater<int>());
   long long int p=array[k-1];
   int a=0;
   for(int i=0;i<n;i++)
   {
       if(array[i]>0 && array[i]>=p)
       {
           a=a+1;
       }
   }
   cout<<a<<endl;
    return 0;
}