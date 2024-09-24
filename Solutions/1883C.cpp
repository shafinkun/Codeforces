/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1883/C
// Inquilab Zindabad!!!
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

    bool flag = false;
    int mult = 1;

    vector<int> v(n);
    for (auto &it : v)
    {
        cin >> it;
        if (it % k == 0)
        {
            flag = true;
        }
        mult = (mult * it) % MOD;
    }

    // cerr << mult << endl;

    if (flag || mult % k == 0)
    {
        cout << 0 << endl;
        return;
    }

    // int mini = INT_MAX;
    // for (auto &it : v)
    // {
    //     int f = (it / k) + 1;
    //     int ans = (f * k) - it;
    //     mini = min(mini, ans);
    // }

    // cout << mini << endl;

    cout << mult % k << endl;

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