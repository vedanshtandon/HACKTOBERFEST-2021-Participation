#include <bits/stdc++.h>
using namespace std;
#define lli long long int
void subs(string input,string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return ;
    }
    subs(input.substr(1),output);
    subs(input.substr(1),output+input[0]);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
      string s;
      cin>>s;
      subs(s,"");
   }
    return 0;
}