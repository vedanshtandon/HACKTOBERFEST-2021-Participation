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

    long long int n;
    cin>>n;

    int ans=floor(1.08*n);
    if(ans==206)
    {
        cout<<"so-so"<<endl;
    }
    else if(ans<206)
    {
        cout<<"Yay!"<<endl;
    }
    else
    {
        cout<<":("<<endl;
    }
    return 0;
}