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
       string s1;
       string s2="party";
       cin>>s1;
       lli length=s1.length();
       lli x;
       for(x=0;x<=length-5;x=x+1)
       {
           string s3=s1.substr(x,5);
           //cout<<s3<<endl;
          if(s2.compare(s3)==0)
          {
              s1[x+2]='w';
              s1[x+3]='r';
              s1[x+4]='i';
              x=x+4;
          }
       }
       cout<<s1<<endl;
   }
    return 0;
}