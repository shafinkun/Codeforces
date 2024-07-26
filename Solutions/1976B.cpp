/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1976/problem/B

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

    vector<int> a(n), b(n + 1);

    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int cnt = 1, last = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        cnt += abs(a[i] - b[i]);

        if(b[n] > a[i] and b[n] < b[i] or b[n] < a[i] and b[n] > b[i])
        {
            last = 0;
        }
        else
        {
            last = min(last, min(abs(a[i] - b[n]), abs(b[n] - b[i])));
        }
    }

    cout << cnt + last << endl;

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