#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   char ch[1001];
   cin>>ch;

   if(ch[0]>=97 && ch[0]<=122)
   {
       ch[0]=ch[0]-32;
   }
   cout<<ch<<endl;
    return 0;
}