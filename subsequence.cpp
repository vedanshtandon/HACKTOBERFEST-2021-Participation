#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void subsequence(string s,vector<string> &subseq,int i=0,string ans="")
{
    if(i>=s.length())
    {
        subseq.push_back(ans);
        return ;
    }

    subsequence(s,subseq,i+1,ans);
    subsequence(s,subseq,i+1,ans+s[i]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

      string s;
      cin>>s;
      vector<string> ans;
      subsequence(s,ans);

      for(int i=0;i<ans.size();i++)
      {
          cout<<ans[i]<<endl;
      }
	return 0;
}