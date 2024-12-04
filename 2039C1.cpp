/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/2039/problem/C1
// Inqilab Zindabad!!!
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
    int x, m;
    cin >> x >> m;

    int n = log2(x);
    n++;
    n = (1 << n) - 1;
    int limit = min(n, m);

    int cnt = 0;
    for (int i = 1; i <= limit; i++)
    {
        int d = (x xor i);
        if (x != i and (i % d == 0 or x % d == 0))
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