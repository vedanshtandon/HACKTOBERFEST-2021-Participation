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
     long long int n;
     unordered_map<int,int> map;
     vector<int> v;
     cin>>n;
     int array[n];
     for(int i=0;i<n;i++)
     {
         cin>>array[i];
         if(map[array[i]]==0)
         {
             v.push_back(array[i]);
             map[array[i]]=1;
         }
     }
     sort(v.begin(),v.end());
     int flag=0;
     for(int i=0;i<v.size()-1;i++)
     {
         if(v[i+1]-v[i]!=1)
         {
             flag=1;
             break;
         }
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