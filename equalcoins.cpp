#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif


  long long int t;
  cin >> t;
  while (t--)
  {
      long long int x,y;
      cin>>x;
      cin>>y;
      if(x%2==0)
      {
          if(x==0 && y%2==1)
          {
              cout<<"NO"<<endl;
          }
          else
          {
              cout<<"YES"<<endl;
          }
      }
      else
      {
          cout<<"NO"<<endl;
      }
  }
  return 0;
}