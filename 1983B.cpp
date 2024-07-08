/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1983/problem/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int r, c;
    cin >> r >> c;

    int a[r][c], b[r][c];

    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            char c;
            cin >> c;
            b[i][j] = c - '0';
        }
    }

    for(int i = 0; i < r - 1; ++i)
    {
        for(int j = 0; j < c - 1; ++j)
        {
            if((a[i][j] + 1) % 3 == b[i][j])
            {
                a[i][j] = (a[i][j] + 1) % 3;
                a[i + 1][j + 1] = (a[i + 1][j + 1] + 1) % 3;
                a[i][j + 1] = (a[i][j + 1] + 2) % 3;
                a[i + 1][j] = (a[i + 1][j] + 2) % 3;
            }
            else if((a[i][j] + 2) % 3 == b[i][j])
            {
                a[i][j] = (a[i][j] + 2) % 3;
                a[i + 1][j + 1] = (a[i + 1][j + 1] + 2) % 3;
                a[i][j + 1] = (a[i][j + 1] + 1) % 3;
                a[i + 1][j] = (a[i + 1][j] + 1) % 3;
            }
        }
    }

    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            if(a[i][j] != b[i][j])
            {
                no;
                return;
            }
        }
    }

    yes;

    return;
}

signed main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}