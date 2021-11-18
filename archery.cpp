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
        unordered_map<int,int> map;
        long long int k;
        cin>>k;
        for(int i=0;i<k;i++)
        {
            int n;
            cin>>n;
            int a=0;
            while(n%2==0)
            {
                n=n/2;
                a++;
            }
            map[2]=max(map[2],a);
            for(int i=3;i*i<=n;i++)
            {
                a=0;
                while(n%i==0)
                {
                    n=n/i;
                    a++;
                }
                map[i]=max(map[i],a);
            }
            if(n>2)
            {
                map[n]=max(map[n],1);
            }
        }

        long long int answer=1;
        for(int i=1;i<=48;i++)
        {
            answer=answer*(pow(i,map[i]));
        }
        cout<<answer<<endl;
      }
	return 0;
}