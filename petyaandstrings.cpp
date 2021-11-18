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

   char s1[101];
   char s2[101];

   cin>>s1;
   cin>>s2;

   for(int i=0;i<101;i++)
   {
       if(s1[i]>=65 && s1[i]<=90)
       {
           s1[i]=s1[i]+32;
       }
       if(s2[i]>=65 && s2[i]<=90)
       {
           s2[i]=s2[i]+32;
       }
   }

   int ans=strcmp(s1,s2);
   cout<<ans<<endl;
    return 0;
}