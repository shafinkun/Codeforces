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
    int n;
    cin >> n;

    vector<int> v(n - 1);
    for (auto &x : v)
        cin >> x;

    vector<int> a;
    a.push_back(v[0]);

    for (int i = 0; i < n - 2; ++i)
    {
        a.push_back(v[i] | v[i + 1]);
    }

    a.push_back(v.back());

   
    for (int i = 0; i < n - 1; ++i)
    {
        if ((a[i] & a[i + 1]) != v[i])
        {
            cout << -1 << endl;
            return;
        }
    }

    for (auto x : a)
    {
        cout << x << ' ';
    }
    cout << endl;
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