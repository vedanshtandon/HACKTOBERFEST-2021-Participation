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
     long long int operations[n];

     for(int i=0;i<n;i++)
     {
         cin>>array[i];
         int count=0;
         while(array[i]%2==0)
         {
             array[i]=floor(array[i]/2.0);
             count++;
         }
         operations[i]=count;
     }
     cout<<*min_element(operations,operations+n)<<endl;
   }
    return 0;
}