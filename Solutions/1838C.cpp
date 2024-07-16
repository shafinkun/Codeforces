/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1838/problem/C

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\r'
#define int long long
#define yes cout << "YES\r"
#define no cout << "NO\r"
const int MOD = 1e9 + 7;

int B[1000][1000], C[1000][1000];
void solve()
{
    int r, c;
    cin >> r >> c;

    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            a[i][j] = j + 1 + i * c;

    for (int i = 1; i < r; i += 2)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < r; i += 2)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

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