/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link :

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
    ll x, y, z, k;
    cin >> x >> y >> z >> k;

    ll X, Y, Z, ans = 0;
    for (int i = 1; i <= x; ++i)
    {
        for (int j = 1; j <= y; ++j)
        {
            ll temp = i * j;
            if (k % temp == 0 and (k / temp) <= z)
            {
                X = x - i + 1;
                Y = y - j + 1;
                Z = z - (k / temp) + 1;
                ans = max(ans, X * Y * Z);
            }
        }
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