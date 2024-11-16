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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int gld = 0, cnt = 0;
    for (auto &x : v)
    {
        if (x >= k)
            gld += x;
        else if (x == 0)
        {
            if (gld)
            {
                gld--;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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