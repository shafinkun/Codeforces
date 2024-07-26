/*________________In the name of ALLAH_______________*/
/*___________________By:shafinkun________________*/
// Problem link: https://codeforces.com/problemset/problem/445/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"

void solve()
{
    int r, c;
    cin >> r >> c;
    char a[r][c];
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (a[i][j] == '.')
            {
                if ((i + j) & 1)
                {
                    a[i][j] = 'B';
                }
                else
                {
                    a[i][j] = 'W';
                }
            }
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}