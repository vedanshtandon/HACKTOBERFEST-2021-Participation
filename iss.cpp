#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
ulli gcd(ulli p,ulli q)
{
    if(p==q)
    {
        return p;
    }
    else if(p>q)
    {
        return gcd(p-q,q);
    }
    else{
        return gcd(p,q-p);
    }

}
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
       unsigned long long int m=1000000007;
      unsigned long long int k,a,i,sum=0;
      cin>>k;
      a=(2*k)+1;
      ulli* array=new ulli[a];
      array[0]=k+1;
      for(i=2;i<=a;i++)
      {
          array[i-1]=k+(i*i);
          sum=sum+ gcd(array[i-2],array[i-1]);
      }
      cout<<sum%m<<endl;
      delete [] array;
   }
    return 0;
}