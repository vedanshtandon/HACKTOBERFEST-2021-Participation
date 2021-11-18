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
   long long int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;

   if(a==7 || b==7 || c==7)
   {
       cout<<"YES"<<endl;
   } 
   else
   {
       cout<<"NO"<<endl;
   }
  }
  return 0;
}