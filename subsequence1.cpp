#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int subs(string input,string output[])
{
    if(input.empty())
    {
        output[0]="";
        return 1;
    }
    string ssss=input.substr(1);
    int leng=subs(ssss,output);
    for(int i=0;i<leng;i++)
    {
        output[i+leng]=input[0]+output[i];
    }
    return 2*leng;
}
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
       long long int i,k;
      string s;
      cin>>s;
     string* output=new string[1000];
     k=subs(s,output);
     for(i=0;i<k;i++)
     {
         cout<<output[i]<<endl;
     }
   }
    return 0;
}