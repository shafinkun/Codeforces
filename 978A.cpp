/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/978/problem/A

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

    vector<int> ans;

    for (int i = n - 1; i >= 0; --i)
    {
        if (find(ans.begin(), ans.end(), v[i]) == ans.end())
            ans.push_back(v[i]);
    }
    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << ' ';
    cout << endl;

    
    return;
}

signed main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}