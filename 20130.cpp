/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link :
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

void solve()
{
    int n;
    cin >> n;

    int x, y;
    cin >> x >> y;

    if (n % x == 0)
        x = n / x;
    else
        x = (n / x) + 1;
    
    if (n % y == 0)
        y = n / y;
    else
        y = (n / y) + 1;

    int ans = max(x, y);
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