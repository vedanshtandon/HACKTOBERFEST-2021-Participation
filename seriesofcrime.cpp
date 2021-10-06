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

     long long int n,m;
     cin>>n;
     cin>>m;
     char array[n][m];
     long long int x,y;
     for(int i=0;i<n;i++)
     {
         int count=0;
         for(int j=0;j<m;j++)
         {
             cin>>array[i][j];
             if(array[i][j]=='*')
             {
                 count++;
             }
         }
         if(count==1)
         {
             x=i+1;
         }
     }
     for(int i=0;i<m;i++)
     {
         int count=0;
         for(int j=0;j<n;j++)
         {
             if(array[j][i]=='*')
             {
                 count++;
             }
         }
         if(count==1)
         {
             y=i+1;
         }
     }
     cout<<x<<" "<<y<<endl;
    return 0;
}