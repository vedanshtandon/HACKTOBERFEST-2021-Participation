
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

// function to find prime numbers sieve of erathosthenes O(log N)
// primes[i]==0 means number is prime
// primes[j]==1 means numberis not prime
// primes[] array must be declared in the main of size 100001
void sieve(int primes[])
{
  primes[0] = 1;
  primes[1] = 1;
  for (int i = 2; i * i <= 100000; i++)
  {
    if (primes[i] == 0)
    {
      for (int j = i * i; j <= 100000; j = j + i)
      {
        primes[j] = 1;
      }
    }
  }
}

// sieve_factorization function  O( log N)
// find the prime factorization f an entered number
// spf[] array must be declared in the main of size 100001
void sieve_factorization(int spf[])
{
  spf[0] = 0;
  for (int i = 1; i < 100001; i++)
  {
    spf[i] = i;
  }
  for (int i = 4; i < 100001; i = i + 2)
  {
    spf[i] = 2;
  }
  for (int i = 3; i * i <= 100001; i++)
  {
    if (spf[i] == i)
    {
      for (int j = i * i; j <= 100001; j = j + i)
      {
        if (spf[j] == j)
        {
          spf[j] = i;
        }
      }
    }
  }
  // spf[i] stores the smallest prime factor of i
}

// factorial % m for large numbers O(N)
int factorial(int n)
{
  long long int m = 1e9 + 7;
  long long int ans = 1;
  for (int i = 1; i <= n; i++)
  {
    ans = (ans * i) % m;
  }
  return ans % m;
}

// power(x,n) for large numbers % m at each step O(log N)
long long int power(int x, int n)
{
  long long int m = 1e9 + 7;
  // base condition
  if (n == 0)
  {
    return 1;
  }
  if (n % 2 == 1)
  { // if `n` is odd
    return ((x % m) * (((power(x, n / 2) % m) * (power(x, n / 2) % m)) % m)) % m;
  }
  // otherwise, `n` is even
  return (power(x, n / 2) * power(x, n / 2)) % m;
}



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif


  long long int t;
  cin >> t;
  while (t--)
  {

      long long int n,x,p;
      cin>>n;
      cin>>x;
      cin>>p;

      if(p<=((4*x)-n))
      {
          cout<<"PASS"<<endl;
      }
      else
      {
          cout<<"FAIL"<<endl;
      }
  }
  return 0;
}