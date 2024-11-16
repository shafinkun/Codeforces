/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/1982/B

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
    int x, y, k;
    cin >> x >> y >> k;

    x++;
    k--;
    while (x != y)
    {
        while (x % y == 0)
        {
            x /= y;
        }
        
        if (k == 0)
        {
            cout << x << endl;
            return;
        }

        int temp = y - (x % y);
        if (temp <= k)
        {
            x += temp;
            k -= temp;
        }
        else
        {
            cout << x + k << endl;
            return;
        }
    }
    cout << 1 + k % (y - 1) << endl;

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