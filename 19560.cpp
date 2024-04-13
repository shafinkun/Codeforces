/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1956/problem/0

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int k, q;
    cin >> k >> q;
    vector<int> v(k);
    vector<int> w(q);

    for(auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    for(auto &x : w) cin >> x;

    for(int i = 0; i < q; i++)
    {
        w[i] = min(w[i], v[0] - 1);
    }

    for(int i = 0; i < q; i++)
    {
        cout << w[i] << ' ';
    }
    cout << endl;

    return;
}

int main()
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