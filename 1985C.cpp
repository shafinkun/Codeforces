/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1985/C

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
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    vector<ll> largeEle(n);
    ll temp = v.front();
    largeEle[0] = v[0];
    for (int i = 1; i < n; ++i)
    {
        if (v[i] > temp)
        {
            temp = v[i];
        }
        largeEle[i] = temp;
    }

    vector<ll> presum(n);
    presum[0] = v[0];
    for (int i = 1; i < n; ++i)
    {
        presum[i] = presum[i - 1] + v[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (presum[i] == largeEle[i] + largeEle[i])
            ans++;
    }

    cout << ans << endl;
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