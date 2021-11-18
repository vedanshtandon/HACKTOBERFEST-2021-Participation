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

    long long int n,q;
    cin>>n;
    cin>>q;

    long long int a[n];
    long long int b[n+4]={0};
    long long int v[n+4]={0};

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l;
        cin>>r;
        l--;
        r--;
        v[l]=v[l]+1;
        v[r+1]=v[r+1]-1;
    }
    long long int x=0;
    for(int i=0;i<n;i++)
    {
        x=x+v[i];
        b[i]=x;
    }

    sort(b,b+n,greater<int>());

    long long int answer=0;
    for(int i=0;i<n;i++)
    {
        answer=answer+(a[i]*b[i]);
    }
    cout<<answer<<endl;
	return 0;
}