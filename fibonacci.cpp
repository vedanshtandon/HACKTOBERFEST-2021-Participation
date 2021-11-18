#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int *ans)
{
    if (n <= 1)
    {
        return 1;
    }

    // check if the answer is already computed or not
    if (ans[n] != -1)
    {
        return ans[n];
    }
    //if nnot present then compute it
    int a = fibonacci(n - 1, ans);
    int b = fibonacci(n - 2, ans);
    // save it for future use
    ans[n]=a+b;
    return ans[n];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long int n;
    cin >> n;

    int *ans=new int[n+1];
    for (int i = 2; i < n + 1; i++)
    {
        ans[i] = -1;
    }
    ans[0]=0;
    ans[1]=1;
    int a=fibonacci(n,ans);
    ans[n]=a;
    cout<<ans[n]<<endl;
    return 0;
}