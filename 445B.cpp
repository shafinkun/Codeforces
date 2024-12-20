/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/445/B
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
vector<int> v[55];
vector<bool> vis(55, 0);

int dfs(int a, int cnt)
{
    if (vis[a] == 1)
        return cnt;
    vis[a] = 1;

    for (auto x : v[a])
    {
        if (vis[x] == 1)
            cnt++;
        dfs(x, cnt);
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int x, y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }

    int cnt = 0;
    cout << 2 * dfs(1, cnt) << endl;

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