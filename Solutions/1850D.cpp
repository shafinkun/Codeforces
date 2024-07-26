/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1850/D

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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    int sz = 0, mx = 0;
    for (int i = 1; i < n; ++i)
    {
        if (abs(v[i] - v[i - 1]) <= k)
        {
            sz++;
            mx = max(mx, sz);
        }
        else
        {
            sz = 0;
        }
    }
    cout << n - mx - 1 << endl;

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