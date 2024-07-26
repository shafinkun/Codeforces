/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1807/D

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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    vector<int> presum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        presum[i] = presum[i - 1] + v[i - 1];
    }

    while (q--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        int temp = presum[r] - presum[l-1];
        int ans = (presum[n] - temp) + (k * (r - l + 1));

        (ans & 1) ? yes : no;
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