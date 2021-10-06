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

    vector<int> ans;
    ans.push_back(1);
    for(int i=2;i<=n;i++)
    {
      int carry=0;
      for(int j=0;j<ans.size();j++)
      {
        int k= (ans[j]*i)+ carry;
        ans[j]=k%10;
        carry=k/10;
      }
      while(carry!=0)
      {
        ans.push_back(carry%10);
        carry=carry/10;
      }
    }
    for(int i=ans.size()-1;i>=0;i--)
    {
      cout<<ans[i];
    }
    cout<<endl;
   }
    return 0;
}