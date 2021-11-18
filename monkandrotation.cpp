#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    	long long int t;
      cin>>t;

      while(t--)
      {
        long long int n,k;
        cin>>n;
        cin>>k;
        k=k%n;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        for(int i=(n-k);i<n;i++)
        {
            cout<<array[i]<<" ";
        }
        for(int i=0;i<n-k;i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
      }
	return 0;
}