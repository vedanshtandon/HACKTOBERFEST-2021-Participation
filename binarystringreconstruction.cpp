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
       long long int n0,n1,n2;
       cin>>n0;
       cin>>n1;
       cin>>n2;
       long long int zero=0,one=0,flag1=0,flag2=0,i=0,j=0;
       while(flag1!=1)
       {
           if((2*n0)==(i*(i-1)))
           {
               flag1=1;
               zero=i;
           }
           i=i+1;
       }


       while(flag2!=1)
       {
           if((2*n2)==(j*(j-1)))
           {
               flag2=1;
               one=j;
           }
           j=j+1;
       }

       for(int i=0;i<one;i++)
       {
           cout<<"1";
       }
       for(int i=0;i<zero;i++)
       {
           cout<<"0";
       }
       cout<<endl;
   }
    return 0;
}