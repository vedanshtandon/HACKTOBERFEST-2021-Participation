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

    string s,ans="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            continue ;
        }
        else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            continue ;
        }
        else if(s[i]>=65 && s[i]<=90)
        {
            ans=ans+'.'+ (char)(s[i]+32);
        }
        else
        {
            ans=ans+'.'+s[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}