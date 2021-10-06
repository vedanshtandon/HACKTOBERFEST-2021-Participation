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

  lli t, z;
  cin >> t;
  for (z = 1; z <= t; z++)
  {
    long long int x,ans=1;
    cin >> x;

    long long int a = 1;

    if (x == 1 || x == 2)
    {
      cout << "2" << endl;
    }
    else if (x == 0)
    {
      cout << "1" << endl;
    }
    else
    {
      while (ans * 2 <= x)
      {
        ans = ans * 2;
      }


      // mean if x is of 2^n form then required answer is x
      // because all its preceding (2^n-1)=2^n so on further 
      // the max elemnet that can be excluded is x will form 
      if(x==ans)  
      {
        cout<<x<<endl;
      }
      else if(x==(2*ans)-1) // x==2^n-1 the x+1 will be the answer
      {
        cout<<x+1<<endl;
      }
      else
      {
        cout<<ans<<endl; // else 2^n answer where n=no. of bits of x-1;
      }
    }
  }
  return 0;
}