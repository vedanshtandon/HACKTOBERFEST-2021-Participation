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

   string s;
   cin>>s;

   int dot;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='.')
       {
           dot=i;
       }
   }

   if(s[dot-1]=='9')
   {
       cout<<"GOTO Vasilisa."<<endl;
   }
   else
   {
       char last=s[dot-1];
      if(s[dot+1]>='5')
      {
          last=s[dot-1]+1;
      }
      for(int i=0;i<dot-1;i++)
      {
          cout<<s[i];
      }
      cout<<last<<endl;
   }
    return 0;
}