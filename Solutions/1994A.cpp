/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1994/A

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

    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> a[i][j];

    if (r == 1 and c == 1)
        cout << -1 << endl;
    else
    {
        for (int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (i == r - 1 and j == c - 1)
                    cout << a[0][0] << ' ';
                else if (j == c - 1)
                    cout << a[i + 1][0] << ' ';
                else
                    cout << a[i][j + 1] << ' ';
            }
            cout << endl;
        }
    }
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