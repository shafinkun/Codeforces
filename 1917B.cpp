/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1917/B

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    set<ll> st;

    ll ans = 0;
    for (auto x : s)
    {
        st.insert(x);
        ans += st.size();
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