#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    lli t, z;
    cin >> t;           // testcase
    for (z = 1; z <= t; z++)
    {
        char ch;

        int arr_first[260] = {0};    // an array to find frequecy of each letter in first half
        int arr_second[260] = {0}; // an array to find frequency of each element in second half
       
       // the above array counts the frequency of each alphabet
       //size is 260 because in ascii there are a total of 256 elemnts only
       // at 0th index character refer to letter  having ascii value 0 
       // at 64th index character refer to letter  having ascii value 64 that is A
        // at 97th index character refer to letter  having ascii value 97 that is a
        // the purpose of above arrays is resolved 
        long long int len, x, flag = 0;
        string s;
        cin >> s;
        len = s.length();
        int half = len / 2;
        if (len % 2 == 0)
        {
            half = half - 1;
            for (x = 0; x <= half; x++)
            {
                ch = s[x];
                arr_first[ch] = arr_first[ch] + 1;// updating frequecy of that particular letter in first half array
            }
            for (x = half + 1; x < len; x++)
            {
                ch = s[x];
                arr_second[ch] = arr_second[ch] + 1;// updating frequency of that particular letter in second half array
            }
        }
        else
        {
            for (x = 0; x <half; x++)
            {
                ch = s[x];
                arr_first[ch] = arr_first[ch] + 1;// updating frequecy of that particular letter in first half array
            }
            for (x = half + 1; x < len; x++)
            {
                ch = s[x];
                arr_second[ch] = arr_second[ch] + 1;// updating frequency of that particular letter in second half array
            }
        }
        for (x = 0; x < 260; x++)
        {
            if (arr_first[x] != arr_second[x]) // if any character donot have same frequecy then not a lapalindrome string
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0) // indicates that all the letters have same frequency
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl; //indicates that all the letters do not have same frequency
        }
    }
    return 0;
}