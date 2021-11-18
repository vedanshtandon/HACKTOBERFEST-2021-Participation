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
        long long int n;
		cin>>n;
		int array[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>array[i][j];
			}
		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int x=i;x<n;x++)
				{
					for(int y=j;y<n;y++)
					{
						if(array[i][j]>array[x][y])
						{
							ans++;
						}
					}
				}
			}
		}
		cout<<ans<<endl;
      }
	return 0;
}