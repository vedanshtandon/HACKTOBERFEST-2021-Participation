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

   long long int n;
   cin>>n;
   long long int array[n];
   int m=-1;
   int element=INT_MIN;
   for(int i=0;i<n;i++)
   {
       cin>>array[i];
       if(element<array[i])
       {
           m=i;
           element=array[i];
       }
   }
   sort(array,array+n);
   cout<<m+1<<" "<<array[n-2]<<endl;
    return 0;
}