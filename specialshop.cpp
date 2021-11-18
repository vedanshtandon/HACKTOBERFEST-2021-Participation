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
        double n,a,b;
        cin>>n;
        cin>>a;
        cin>>b;
        int x= (n*b)/(a+b);
        int cost1=(a*x*x)+(b*(n-x)*(n-x));
        int cost2=(a*(x+1)*(x+1))+(b*(n-x-1)*(n-x-1));

        long long int answer=min(cost1,cost2);
        cout<<answer<<endl;
      }
	return 0;
}