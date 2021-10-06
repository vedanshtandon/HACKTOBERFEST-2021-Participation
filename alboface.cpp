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


   /*
        Was not able to solve the question in live contest
        see
        for this question

        if n id odd then there is a fixed move to do n-1
        and hence player does not have a control over the winning state

        if n is even and n%4==0
        means foe powers of two like 4 8 16 it is not divisible
        in this case players is bound to do n/2
        and hence has no power to control the game

        if(n%4==0)
        then player can control the game
        see how


        n/(2^y)  ->  winning or losing
        Alice         Bob

        n/(2^y-1) -> p/2 ->winning or losing
        Alice        Bob   Alice

        so for this state alice / bob can alter their winning
        or losing position
        so if(n%4==0)
        he will be the winner for sure as he will have 
        the power to control the game
    */
   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
       long long int n;
       bool ans=false;
       cin>>n;
       while(n!=0)
       {
           if(n%2==1)
           {
               n=n-1;
               ans=!ans;
           }
           else if(n%2==0 && n%4!=0)
           {
               n=n/2;
               ans=!ans;
           }
           else
           {
               ans=!ans;
               break;
           }
       }
       if(ans)
       {
           cout<<"Alice"<<endl;
       }
       else
       {
           cout<<"Bob"<<endl;
       }
   }
    return 0;
}