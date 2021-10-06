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
       long long int p=1000000007;
     long long int n;
     cin>>n;
     long long int array[n];
     long long int left_maximum[n];
     long long int right_maximum[n];
     int m=INT_MIN;
     for(int i=0;i<n;i++)
     {
         cin>>array[i];
       if(array[i]>m)
       {
           m=array[i];
       }
         left_maximum[i]=m;
     }
     m=INT_MIN;
     for(int i=n-1;i>=0;i--)
     {
         if(array[i]>m)
         {
             m=array[i];
         }
         right_maximum[i]=m;
     }
     long long int answer=0;
     for(int i=0;i<n;i++)
     {
         if(array[i]<left_maximum[i]  &&  array[i]<right_maximum[i])
         {
             int k=min(left_maximum[i],right_maximum[i]);
             answer=(answer+k-array[i])%p;
         }
     }
     cout<<answer<<endl;
   }
    return 0;
}