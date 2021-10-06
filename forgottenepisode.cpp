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

   long long int n;
   cin>>n;
   unordered_map<int,int> map;
   for(int i=0;i<n;i++)
   {
       int k;
       cin>>k;
       map[k]=1;
   }
   for(int i=1;i<=n;i++)
   {
       if(map[i]==0)
       {
           cout<<i<<endl;
           break;
       }
   }
    return 0;
}