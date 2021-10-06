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
      long long int n,x,a,b,sarthak=0,anuradha=0;
      cin>>n;
      cin>>a;
      cin>>b;
      string s;
      for(x=0;x<n;x++)
      {
        cin>>s;
        char ch=s[0];
        if(ch=='E' || ch=='Q' || ch=='U' || ch=='I' || ch=='N' || ch=='O' || ch=='X')
        {
            sarthak=sarthak+a;
        }
        else
        {
            anuradha=anuradha+b;
        }
      }
      if(sarthak>anuradha)
        {
            cout<<"SARTHAK"<<endl;
        }
        else if(sarthak<anuradha)
        {
            cout<<"ANURADHA"<<endl;
        }
        else
        {
            cout<<"DRAW"<<endl;
        }
   }
    return 0;
}