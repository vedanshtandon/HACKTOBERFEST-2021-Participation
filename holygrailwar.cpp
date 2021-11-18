#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    long long int n, m, k;
    cin >> n;
    cin >> m;
    cin >> k;

    // stores the point where criminal are present

    map<pair<int, int>, int> map;

    // stores the count of points in each rows and columns 

    int rows[n] = {0};
    int columns[m] = {0};

    for (int i = 0; i < k; i++)
    {
        int p, q;
        cin >> p;
        cin >> q;
        p = p - 1;
        q = q - 1;

        pair<int, int> r;

        r.first = p;
        r.second = q;
        // store the point
        map[r]++;

        // update the value
        rows[p]++;
        columns[q]++;
    }

    // finding maximum for each row and column

    int max_r = *max_element(rows, rows + n);
    int max_c = *max_element(columns, columns + m);
    // storing in answer
    int ans = max_r + max_c;
    vector<int> v1;
    vector<int> v2;

    // storing row index where answer could be possible
    for (int i = 0; i < n; i++)
    {
        if (max_r == rows[i])
        {
            v1.push_back(i);
        }
    }
    // storing column index where answer colud be possible
    for (int i = 0; i < m; i++)
    {
        if (max_c == columns[i])
        {
            v2.push_back(i);
        }
    }
    
    int flag=0;
    int count=0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            pair<int, int> r;
            r.first = v1[i];
            r.second = v2[j];
            if (map[r] == 1)
            {
                flag=1;
            }
            else
            {
                count=1;
            }
        }
    }
   
   if(flag==1 && count==0) // means anly collapsing index and no other index
   {
       cout<<ans-1<<endl;
   }
   else 
   {
       cout<<ans<<endl;
   }
    return 0;
}