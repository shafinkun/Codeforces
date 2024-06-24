/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1875/A

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
    int a, i, n;
    cin >> a >> i >> n;
    --a;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int sum = i;
    for (auto x : v)
    {
        sum += min(x, a);
    }

    cout << sum << endl;

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