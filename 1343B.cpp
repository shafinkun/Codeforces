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

    vector<int> a, b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 2; i <= n; i += 2)
    {
        a.push_back(i);
        cnt1 += i;
    }
    for (int i = 1; i < (n - 1); i += 2)
    {
        b.push_back(i);
        cnt2 += i;
    }
    if ((cnt1 - cnt2) & 1)
    {
        yes;
        for (auto x : a)
            cout << x << ' ';
        for (auto x : b)
            cout << x << ' ';
        cout << cnt1 - cnt2 << endl;
    }
    else
        no;

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