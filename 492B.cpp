/*____________________In The Name Of Allah________________*/
/*_____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/492/B


#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'


void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());
    int mx = 0;

    for (int i = 1; i < n; i++)
    {
        int dif = v[i] - v[i - 1];
        mx = max(mx, dif);
    }

    double d1 = mx / 2.0, d2 = v[0], d3 = (l - v[n - 1]);

    // cerr << d1 << " " << d2 << " " << d3;

    cout << fixed << setprecision(10) << max(d1, max(d2, d3)) << endl;
}
int main()
{
    optimize();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}