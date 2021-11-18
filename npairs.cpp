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


    // the key thing to notice in this question is that 
    // | s[j] - s[i] | can not be greater than 9
    // so rather than traversing every array element
    // travers next 10 element only
    // because j-1<=9 only

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
      long long int n;
      cin>>n;

      char ch[n];
      for(int i=0;i<n;i++)
      {
          cin>>ch[i];
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
          for(int j=i+1;j<(int)min((long long int)(i+10),n);j++)
          {
              int k= abs(ch[j]-ch[i]);
              if(j-i==k)
              {
                  ans++;
              }
          }
      }
      cout<<ans<<endl;
   }
    return 0;
}