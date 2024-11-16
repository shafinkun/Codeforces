/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1979/problem/C

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int unsigned long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int LCM = 1;
    for (auto x : v)
        LCM = lcm(x, LCM);

    int sum = 0;
    vector<int> result;
    for (int i = 0; i < n; ++i)
    {
        int temp = LCM / v[i];
        sum += temp;
        result.push_back(temp);
    }

    if (sum >= LCM)
        cout << -1 << endl;
    else
    {
        for (auto x : result)
            cout << x << " ";
        cout << endl;
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