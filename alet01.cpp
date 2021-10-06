#include <bits/stdc++.h>
using namespace std;
#define lli long long int
string out[100000];
long long int ind=0;
long long int h=1;
void keypad(long long int num,string output)
{
   if(num==0)
   {
       out[ind]=output;
       ind=ind+1;
   } 
   string array[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   int k=num%10;
   int i;
   string ss=array[k];
   int len=ss.length();
   h=h*len;
   for(i=0;i<len;i++)
   {
       keypad(num/10 , ss[i]+output);
   } 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
      long long int n,x,k,num=0,p=0;
      cin>>n;
      for(x=0;x<n;x++)
      {
          cin>>k;
          num=num*10 + k;
      }
      keypad(num,"");
      sort(out,out+ind);
      for(x=0;x<ind;x++)
      {
          cout<<out[x]<<" ";
      }
      cout<<endl;
    return 0;
}