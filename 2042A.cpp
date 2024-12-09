/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/2042/problem/A
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
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    sort(a.rbegin(), a.rend());

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        k -= a[i];
        if (k < 0)
            break;
        ans = k;
    }

    cout << ans << endl;

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