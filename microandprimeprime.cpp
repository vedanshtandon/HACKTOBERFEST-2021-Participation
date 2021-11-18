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
    
    // prime will tell wheter number is prime or not
    // sieve of erathosthenes
    int prime[100005]={0};
    prime[0]=1;
    prime[1]=1;
    for(int i=2;i*i<=100004;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=100004;j=j+i)
            {
                prime[j]=1;
            }
        }
    }
    // here count array will store the count of prime numbers
    // occuring between 1 to i
    int count[100005]={0};
    // is_prime_prime dtore whether i-th element is prime or not
    int is_prime_prime[100005]={0};
    // store the count of prime prime numbers occuring till i-1
    int array[100005]={0};
    int a=0;

    // counting number of prime numbers between 1 to i
    for(int i=0;i<=100004;i++)
    {
        if(prime[i]==0)
        {
            a=a+1;
        }
        count[i]=a;
    }
    // checking whether i-th number is prime prime or not
    for(int i=0;i<=100004;i++)
    {
        if(prime[count[i]]==0)
        {
            is_prime_prime[i]=1;
        }
    }
    // storing number of prime number from i to i-1
    a=0;
    for(int i=0;i<=100004;i++)
    {
        array[i]=a;
        if(is_prime_prime[i]==1)
        {
            a=a+1;
        }
    }

   lli t,z;
   cin>>t;
   for(z=1;z<=t;z++)
   {
     long long int l,r;
     cin>>l;
     cin>>r;
     int ans=array[r+1]-array[l];
     cout<<ans<<endl;
   }
    return 0;
}