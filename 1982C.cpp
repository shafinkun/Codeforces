/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1982/problem/C

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
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int sum = 0, win = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];

        if (sum >= l and sum <= r)
        {
            win++;
            sum = 0;
        }
        else if (sum > r)
        {
            sum = 0;
            
            if (v[i] > r)
                continue;

            i -= 1;
        }
    }

    cout << win << endl;

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