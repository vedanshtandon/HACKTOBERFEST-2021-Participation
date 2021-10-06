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

  long long int n;
  cin >> n;
  int prime[100051] = {0};
  for (int i = 2; i * i <= 100050; i++)
  {
    if (prime[i] == 0)
    {
      for (int j = i * i; j <= 100050; j = j + i)
      {
        prime[j] = 1;
      }
    }
  }
  

  for (int i = n; i < 100050; i++)
  {
    if (prime[i] == 0)
    {
      cout << i << endl;
      break;
    }
  }
  return 0;
}