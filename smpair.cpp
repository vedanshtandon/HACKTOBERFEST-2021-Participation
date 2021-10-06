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

    lli t, z;
    cin >> t;
    for (z = 1; z <= t; z++)
    {
        long long int n, x, sum = 0, y, k,min,temp;
        cin >> n;
        long long int array[n];
        for (x = 0; x < n; x++)
        {
            cin >> array[x];
        }
        
        for(x=0;x<2;x++)
        {
            for(y=x+1;y<n;y++)
            {
                if(array[x]>array[y])
                {
                    temp=array[y];
                    array[y]=array[x];
                    array[x]=temp;
                }
            }
           
        }
        cout << array[0]+array[1] << endl;
    }
    return 0;
}