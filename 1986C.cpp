/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1986/problem/C

// contest er shomoy tomar ki hoy Shafin???

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
    int n, m;
    cin >> n >> m;

    string s, c;
    cin >> s;

    vector<int> ind(m);
    for (auto &x : ind)
        cin >> x;

    // used vector instead of set because set is only called by iterator
    sort(ind.begin(), ind.end());
    auto it = unique(ind.begin(), ind.end());
    ind.erase(it, ind.end());

    cin >> c;
    sort(c.begin(), c.end());

    for (int i = 0; i < ind.size(); ++i)
        s[ind[i] - 1] = c[i];

    cout << s << endl;

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