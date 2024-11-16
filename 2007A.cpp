/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link :

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
    int l, r;
    cin >> l >> r;

    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (__gcd(i, i + 1) == 1 && __gcd(i, i + 2) == 1 && __gcd(i + 1, i + 2) == 1)
            ans++;
    }
    cout << ans / 2 << endl;
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