#include <bits/stdc++.h>
using namespace std;
#define lli long long int
long long int sum=0;
void solve(lli h,lli k,lli a,lli b,lli c)
{
    if(k==0)
    {
        if(h==0)
        {
            sum=sum+1;
        }
    }
    else{
    solve(h-a,k-1,a,b,c);
    solve(h-b,k-1,a,b,c);
    solve(h-c,k-1,a,b,c);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

      long long int h,a,b,c,k;
      cin>>h;
      cin>>a;
      cin>>b;
      cin>>c;
      cin>>k;

      int array[3];
      array[0]=a;
      array[1]=b;
      array[2]=c;
      sort(array,array+3);

       if( (k*array[0] > h) || (k*array[2]<h))
       {
           cout<<"0"<<endl;
       }
       else
       {
         solve(h,k,a,b,c);
         cout<<sum%1000000007<<endl;
       }
    return 0;
}