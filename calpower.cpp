#include <bits/stdc++.h>
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
      string s;
      cin>>s;
      int n=s.length();
      sort(s.begin(),s.end());

      int ans=0;
      for(int i=0;i<n;i++)
      {
          ans=ans+((s[i]-96)*(i+1));
      }
      cout<<ans<<endl;
  }
  return 0;
}