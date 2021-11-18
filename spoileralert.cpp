
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  long long int n,k;
  cin>>n;
  cin>>k;
  long long int array[n];
  unordered_map<int,int> count;
  unordered_map<int,int> required;

  for(int i=0;i<n;i++)
  {
      cin>>array[i];
      count[array[i]]++;
  }
  sort(array,array+n,greater<int>());
  for(int i=0;i<k;i++)
  {
      required[array[i]]++;
  }

  int r=required[array[k-1]];
  int p=count[array[k-1]];

  // our aim is find P C R  (p!)/((r!)(p-r)!
  return 0;
}