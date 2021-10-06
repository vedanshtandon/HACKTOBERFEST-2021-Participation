#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int Answer(int n,int x)
{
    int count=-1,digit=0,a=-1;
    int nn=n;
    int num=0,k=0,sum=0;
    // check if x is present in the given number or not
    while(nn!=0)
    {
        if(nn%10==x)
        {
            a=1;
            count=digit;
            break;
        }
        digit=digit+1;
        nn=nn/10;
    }
    // if number is not present return 0
    if(a==-1)
    {
        return 0;
    }
    // else do this operation
    // very important point to note is that pow(10,2)=99.999=p=99 in integer
     k=pow(10,count)+0.1;
     num=n+k-(n%k);
     sum=num-n;
     return sum + Answer(num,x);
}
// see the approach is that 5925 and 9 are entered
// so covert 5925+100 means add pow(10,count)==6025-25
// get 6000
// now 6000-5925=75
// return 75 +Answer(6000,9) like that
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
     long long int n,x;
     cin>>n;
     cin>>x;
     int ans=Answer(n,x);
     cout<< ans <<endl;
   }
    return 0;
}