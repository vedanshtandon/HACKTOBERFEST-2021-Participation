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
       long long int n,totalzero=0,totalone=0;
       cin>>n;
       char a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]=='0')
        {
            totalzero=totalzero+1;
        }
        else
        {
            totalone=totalone+1;
        }
    }

    if(totalone==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        vector<int> factors;
        vector<string> possible_string(n);
        vector<int> swaps_done;

        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                factors.push_back(i);
            }
        } 

        for(int i=0;i<factors.size();i++)
        {
            for(int j=0;j<factors[i];j++)
            {
               string s="";
               for(int k=0;k<factors[i];k++)
               {
                   if(k==j)
                   {
                       s=s+'1';
                   }
                   else
                   {
                       s=s+'0';
                   }
               }
               string ss="";
               for(int p=1;p<=n/factors[i];p++)
               {
                   ss=ss+s;
               }
               possible_string.push_back(ss);
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<possible_string.size();i++)
        {
            int a=0;
            for(int j=0;j<n;j++)
            {
               if(a[j]!=(possible_string[i])[j])
               {
                   a=a+1;
               }
            }
            ans=min(a,ans);
        }
        cout<<ans<<endl;
    }
   }
    return 0;
}