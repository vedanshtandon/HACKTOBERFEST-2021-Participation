#include <bits/stdc++.h>
using namespace std;
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
     long long int x,y,a,b,k;
     cin>>x;
     cin>>y;
     cin>>a;
     cin>>b;
     cin>>k;

     long long int petrol=x+(a*k);
     long long int diesel=y+(b*k);

     if(petrol>diesel)
     {
         cout<<"DIESEL"<<endl;
     }
     else if(petrol==diesel)
     {
         cout<<"SAME PRICE"<<endl;
     }
     else
     {
         cout<<"PETROL"<<endl;
     }
  }
  return 0;
}