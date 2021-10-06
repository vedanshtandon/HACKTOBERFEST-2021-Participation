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

        int capital=0;
        int digit=0;
        int small=0;

        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                digit++;
            } 
            if(s[i]>=65 && s[i]<=90)
            {
                capital++;
            } 
            if(s[i]>=97 && s[i]<=122)
            {
                small++;
            } 
        }

        if(capital>0 && small>0 && digit>0 && s.length()>=5)
        {
            cout<<"Correct"<<endl;
        }
        else
        {
            cout<<"Too weak"<<endl;
        }
    return 0;
}