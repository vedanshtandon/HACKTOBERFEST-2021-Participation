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
      long long int n,q,i;
      cin>>n;
      cin>>q;
      long long int array[n];
      long long int oddcount[n];
      long long int evencount[n];
      long long int oc=0;
      long long int ec=0;
      for(i=0;i<n;i++)
      {
          cin>>array[i];
          if(array[i]%2==1)
          {
              oc=oc+1;
          }
          else
          {
              ec=ec+1;
          }
          oddcount[i]=oc;
          evencount[i]=ec;
      }

      for(i=0;i<q;i++)
      {
          long long int l,r,j,odd=0,even=0,ans=0;
          cin>>l;
          cin>>r;
          l=l-1;
          r=r-1;
          
          if(array[l]%2==1)
          {
          odd=oddcount[r]-oddcount[l]+1;
          even=evencount[r]-evencount[l];
          }
          else
          {
           odd=oddcount[r]-oddcount[l];
          even=evencount[r]-evencount[l]+1;
          }
         
         long long int ans1=0,ans2=0;
         if(even>=2)
         {
          ans1=((even)*(even-1)*(even-2))/6;
         }

         if(odd>=1)
         {
          ans2=((odd)*(odd-1)*even)/2;
         }
          cout<<ans1+ans2<<endl;
      }
   }
    return 0;
}
