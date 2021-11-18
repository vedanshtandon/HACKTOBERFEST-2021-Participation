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

  long long int t;
  cin>>t;
  while(t--)
  {
      int india=0,england=0;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;

        if(a==1)
        {
            india++;
        }
        if(a==2)
        {
            england++;
        }
    }

    if(india==england)
    {
        cout<<"DRAW"<<endl;
    }
    else if(india>england)
    {
        cout<<"INDIA"<<endl;
    }
    else
    {
        cout<<"ENGLAND"<<endl;
    }
  }
  return 0;
}