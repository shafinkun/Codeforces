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
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    vector<int> ans;
    for (auto &x : v)
        cin >> x;
        
    int mx = *max_element(v.begin(), v.end());

    while (m--)
    {
        char c;
        cin >> c;

        int l, r;
        cin >> l >> r;

        if (c == '+')
        {
            if (mx >= l and mx <= r)
                mx++;

            ans.push_back(mx);
        }
        else
        {
            if (mx >= l and mx <= r)
                mx--;

            ans.push_back(mx);
        }
    }

    for (auto x : ans)
        cout << x << ' ';
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