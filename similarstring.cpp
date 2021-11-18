#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  long long int t;
  cin >> t;
  while (t--)
  {
    long long int n;
    cin >> n;

    char ch1[n];
    char ch2[n];

    for (int i = 0; i < n; i++)
    {
      cin >> ch1[i];
    }

    for (int i = 0; i < n; i++)
    {
      cin >> ch2[i];
    }

    vector<char> c1;
    vector<char> c2;
    for (int i = 0; i < n; i++)
    {
      if (ch1[i] != ch2[i])
      {
        c1.push_back(ch1[i]);
        c2.push_back(ch2[i]);
      }
    }

    if (c1.size() == 2)
    {
      if (c1[0] == c1[1] && c2[0] == c2[1])
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
    else if(c1.size()==0)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
  return 0;
}