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

    // this question is based on difference array
    // this is a wonderful concept to upadte array query
    // in an array witjin range r to l 
    // in O(N) time complexity

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
      long long int n;
      cin>>n;

      long long int array[n+3]={0};
      unordered_map<int,int> map;
      for(int i=1;i<=n;i++)
      {
          long long int c;
          cin>>c;
          long long int l=max((long long int)0,i-c);
          long long int r=min(n+2,i+c+1);
          array[l]=array[l]+1;
          array[r]=array[r]-1;
      }
      long long int x=0;
      for(int i=0;i<n+2;i++)
      {
          x=x+array[i];
          map[x]++;
      }
      int flag=0;
      for(int i=1;i<=n;i++)
      {
          int h;
          cin>>h;
          if(map[h]==0)
          {
              flag=1;
          }
          map[h]--;
      }
      if(flag==1)
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<endl;
      }
   }
    return 0;
}