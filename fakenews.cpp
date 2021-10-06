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

   string s;
   cin>>s;
   long long int n=s.length();

   int count=0;
   string ss="heidi";
   for(int i=0;i<n;i++)
   {
       if(ss[count]==s[i])
       {
           count=count+1;
           if(count==5)
           {
               break;
           }
       }
   }
   if(count==5)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
    return 0;
}