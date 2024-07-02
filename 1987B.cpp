/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1987/B

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

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    vector<int> mod;
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            mod.push_back(v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }

    sort(mod.begin(), mod.end());

    int mult = mod.size() + 1, ans = 0, temp = 0;
    if (mult == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < mod.size(); i++)
    {
        ans = ans + mult * (mod[i] - temp);
        temp = mod[i];
        mult--;
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