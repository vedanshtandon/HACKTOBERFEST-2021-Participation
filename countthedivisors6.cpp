#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  long long int MAXN = 100001;
  long long int spf[MAXN] = {1};
  long long int map[100005] = {0};
  int flag = 0;

  spf[1] = 1;
  long long int ans = 1;
  for (int i = 2; i < MAXN; i++)
  {
    spf[i] = i;
  }

  for (int i = 4; i < MAXN; i += 2)
  {
    spf[i] = 2;
  }

  for (int i = 3; i * i < MAXN; i++)
  {
    // checking if i is prime
    if (spf[i] == i)
    {
      // marking SPF for all numbers divisible by i
      for (int j = i * i; j < MAXN; j += i)
        // marking spf[j] if it is not
        // previously marked
        if (spf[j] == j)
        {
          spf[j] = i;
        }
    }
  }

  long long int n = 0;
  cin >> n;
  long long int m = (1e9) + 7;

  for (int i = 0; i < n; i++)
  {
    int p ;
    cin >> p;
    if (p == 0)
    {
      continue;
    }
    else
    {
      while (p != 1)
      {
        map[spf[p]] = (((map[spf[p]]) % m) + 1) % m;
        p = p / spf[p];
      }
    }
  }

  for (int i = 0; i < 100005; i++)
  {
    ans = (ans * ((map[i] + 1) % m)) % m;
  }

  cout << ans << '\n';
  return 0;
}
