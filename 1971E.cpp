/*___________________In the name of Allah________________*/
/*___________________Solved By shafinkun________________*/
// Problem link :

#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int MOD = 1e9 + 7;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;

    map<int, int> v;

    vector<int> a(k), b(k);
    for (int i = 0; i < k; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; ++i)
    {
        cin >> b[i];
    }
    for (int i = 0; i < k; ++i)
    {
        v[a[i]] = b[i];
    }

    vector<int> c(q);
    for (int i = 0; i < q; ++i)
    {
        cin >> c[i];
    }

    double time = ((a[k - 1] + a[0]) / 2) / ((b[k - 1] + b[0]) / 2);
    // cerr << time << endl;

    for(int i = 0; i < q; ++i)
    {
        cout << int(c[i] * time) << " ";
    }
    cout << endl;

    return;
}

int main()
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