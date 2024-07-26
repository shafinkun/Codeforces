/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1726/A

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

    int ans = v[n - 1] - v[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, v[i] - v[0]);
    }

    for (int i = 0; i < n - 1; ++i)
    {
        ans = max(ans, v[n - 1] - v[i]);
    }

    //lame!!!!
    for (int i = 1; i < n; ++i)
    {
        ans = max(ans, v[i - 1] - v[i]); //why on earth I gotta substract v[i] from v[i-1]???
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