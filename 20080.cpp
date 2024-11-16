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
    int a, b;
    cin >> a >> b;

    if (a == 0)
    {
        (b % 2 == 0) ? yes : no;
        return;
    }
    else if (b == 0)
    {
        (a % 2 == 0) ? yes : no;
    }
    else
    {
        int total = a + 2 * b;
        (total % 2 == 0) ? yes : no;
    }
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