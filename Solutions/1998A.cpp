/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1998/problem/A

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
    int x, y, k;
    cin >> x >> y >> k;

    int half = k / 2;

    for (int i = 1; i <= half; ++i)
    {
        cout << x + i << ' ' << y + i << endl;
        cout << x - i << ' ' << y - i << endl;
    }
    if (k & 1)
        cout << x << ' ' << y << endl;

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