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

    	long long int t;
      cin>>t;

      while(t--)
      {
        long long int n,m;
        cin>>n;
        cin>>m;

        int u=INT_MIN;
        int v=INT_MAX;

        int array[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>array[i][j];
                u=max(u,array[i][j]);
                v=min(v,array[i][j]);
            }
        }

       set<int> rows;
       set<int> colums;

       for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(u==array[i][j])
                {
                    rows.insert(i);
                    colums.insert(j);
                }
                 if(v==array[i][j])
                {
                    rows.insert(i);
                    colums.insert(j);
                }
            }
        }
        int r=rows.size();
        int c=colums.size();
        int ans=(n*m)-(r*m)-(c*n)+(r*c);
        cout<<ans<<endl;
      }
	return 0;
}