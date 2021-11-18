#include<bits/stdc++.h>
using namespace std;
int main()
{
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif


  long long int t;
  cin >> t;
  while (t--)
  {
      string s1,s2;
      cin>>s1;
      cin>>s2;

      unordered_map<char,int> map;
      for(int i=0;i<s1.length();i++)
      {
          map[s1[i]]=i+1;
      }
      long long int ans=0;
      for(int i=1;i<s2.length();i++)
      {
          int a=map[s2[i]]-map[s2[i-1]];
          ans+=abs(a);
      }
      cout<<ans<<endl;
  }
  return 0;
}