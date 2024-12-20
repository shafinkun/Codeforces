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
    int n, r;
    cin >> n >> r;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;
    sort(v.rbegin(), v.rend());

    int odd = 0, happy = 0;
    for (auto x : v)
    {
        if (x % 2 == 0)
        {
            r -= (x / 2);
            happy += x;
        }
        else
        {
            odd++;
            r -= (x - 1) / 2;
            happy += (x - 1);
        }
    }

    int ans = r - odd;

    if(ans >= 0) happy += ans;
    else happy += (ans * (-2));

    cout << happy << endl;

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