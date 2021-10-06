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
      string s;
      cin>>s;
      int n=s.length();
      vector<char> array;
      array.push_back(s[0]);
      int a=0,sum=0;
      for(int i=1;i<n;i++)
      {
          if(array[a]!=s[i])
          {
              a=a+1;
              array.push_back(s[i]);
          }
      }
      for(int i=0;i<array.size();i++)
      {
          if(array[i]=='0')
          {
              sum=sum+1;
          }
      }
      cout<<min(2,sum)<<endl;
   }
    return 0;
}