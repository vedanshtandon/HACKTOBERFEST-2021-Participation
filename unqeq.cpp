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

     if(n%4!=0)
     {
         cout<<"NO"<<endl;
     }
     else
     {
        int array1[n/2];
        int array2[n/2];
        int a=1;
        for(int i=0;i<n/4;i++)
        {
            array1[i]=a;
            a=a+2;
        }
        int b=2;
        for(int i=0;i<n/4;i++)
        {
            array2[i]=b;
            b=b+2;
        }
        for(int i=0;i<n/4;i++)
        {
            array1[i + n/4]=b;
            b=b+2;
        }
        for(int i=0;i<n/4;i++)
        {
            array2[i + n/4]=a;
            a=a+2;
        }
        
        cout<<"YES"<<endl;
        for(int i=0;i<n/2;i++)
        {
            cout<<array1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n/2;i++)
        {
            cout<<array2[i]<<" ";
        }
        cout<<endl;
     }
   }
    return 0;
}