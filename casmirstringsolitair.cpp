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

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
     string s;
     cin>>s;
     long long int a=0,b=0,c=0;
     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='A')
         {
             a++;
         }
         if(s[i]=='B')
         {
             b++;
         }
         if(s[i]=='C')
         {
             c++;
         }
     }
     if(a+c==b)
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