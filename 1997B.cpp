/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1997/problem/B

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
    int n;
    cin >> n;
    array<string, 2> a;

    cin >> a[0] >> a[1];

    if (n == 2)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;
    for (int i = 1; i < n; ++i)
    {
        if (a[0][i] == '.' and a[0][i - 1] == '.' and a[0][i + 1] == '.' and a[1][i] == '.' and a[1][i - 1] == 'x' and a[1][i + 1] == 'x')
            cnt++;
        if (a[1][i] == '.' and a[1][i - 1] == '.' and a[1][i + 1] == '.' and a[0][i] == '.' and a[0][i - 1] == 'x' and a[0][i + 1] == 'x')
            cnt++;
    }
    cout << cnt << endl;

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