#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
       long long int n,m,l,k,i,j;
       cin>>n;
       cin>>m;
       cin>>l;

       long long int array[n+1]={0};

       for(i=1;i<=m;i++)
       {
           long long int k;
           cin>>k;
           for(j=0;j<k;j++)
           {
               long long int   a;
               cin>>a;
               if(a>=1 && a<=n)
               {
                   array[a]=i;
               }
           }
       }
       long long int colorlist[l];
       for(i=0;i<l;i++)
       {
        cin>>colorlist[i];
       }

        int segment=1;
       for(i=1;i<l;i++)
       {
           if(array[colorlist[i]]!=array[colorlist[i-1]])
           {
              segment=segment+1;
           }
       }
     cout<<segment<<endl;
   }

    return 0;
}
