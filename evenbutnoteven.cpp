#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    lli t, z;
    cin >> t;

    for (z = 1; z <= t; z++)
    {
        long long int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> answer;
        int a=0;
        // if number of odd numbers >= 2 then only possible to create
        // even nut not even number
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-48)%2==1)
            {
                a=a+1;
                answer.push_back(s[i]);
            }
        }
        // if count of odd numbers is >=2 then answer can be any two odd numbers
        if(a>=2)
        {
            cout<<answer[0]<<answer[1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}