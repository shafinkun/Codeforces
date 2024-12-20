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

    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    int total_a = 0, total_b = 0;
    for (int i = 0; i < n; ++i)
    {
        total_a += a[i];
        total_b += b[i];
    }

    vector<int> diff(n);
    for (int i = 0; i < n; ++i)
    {
        diff[i] = a[i] - b[i];
    }

    sort(diff.begin(), diff.end());

    int best_rating = -1e9;
    int current_a = total_a;
    int current_b = total_b;

    for (int i = 0; i <= n; ++i)
    {
        if (i > 0)
        {
            current_a -= diff[i - 1];
            current_b += diff[i - 1];
        }
        best_rating = max(best_rating, min(current_a, current_b));
    }

    cout << best_rating << endl;

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