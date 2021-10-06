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

   int n,x,k;
   cin>>n;
   int array[n];
   int copy[(int)100000]={0};

   for(x=0;x<n;x++)
   {
       cin>>array[x];
       k=array[x];
       copy[k]=copy[k]+1;
   }
   for(x=0;x<n;x++)
   {
       k=array[x];
        if(copy[k]>1)
        {
            cout<<array[x]<<endl;
            break;
        }
   }

    return 0;
}