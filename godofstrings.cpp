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

  
    long long int n, t;
    string s1 = "", s2 = "";

    // taking input for the first string
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      char a;
      cin >> a;
      s1 = s1 + a;
    }
    // taking input for the second string
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      char a;
      cin >> a;
      s2 = s2 + a;
    }

    int lcm = (n * t) / (__gcd(n, t));

    // r=number of shifts of rotation array
    int r = (lcm * 1369) % t;

    string rotated = "";

    for (int i = r; i < t; i++)
    {
      rotated = rotated + s2[i];
    }
    for (int i = 0; i < r; i++)
    {
      rotated = rotated + s2[i];
    }

    string s3 = "", s4 = "";
    for (int i = 0; i < t; i++)
    {
      s3 = s3 + s1[i];
    }
    for (int i = n - t; i < n; i++)
    {
      s4 = s4 + s1[i];
    }

    if(t>n)
    {
      cout<<"\\/"<<endl;
    }
    if (s3 == rotated)
    {
      cout << "/\\" << endl;
    }
    else if (s4 == rotated)
    {
      cout << "/\\"<< endl;
    }
    else
    {
      cout << "\\/" << endl;
    }
  return 0;
}