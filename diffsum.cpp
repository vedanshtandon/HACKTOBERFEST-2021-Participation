#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

   long long int num1,num2;
   cin>>num1;
   cin>>num2;
   if(num1>num2)
   {
       cout<<num1-num2<<endl;
   }
   else
   {
       cout<<num1+num2<<endl;
   }
    return 0;
}