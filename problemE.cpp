/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/gym/451321/problem/E
// Inqilab Zindabad!!!
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
    int n, q, l, r, x;
    cin >> n >> q;

    vector<int> diff(n + 1, 0);

    while (q--)
    {
        cin >> l >> r >> x;
        diff[l - 1] += x;
        diff[r] -= x;
    }

    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += diff[i];
        v[i] = sum;
        cout << v[i] << ' ';
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