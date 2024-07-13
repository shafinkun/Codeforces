/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1992/problem/B

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
    int n, k;
    cin >> n >> k;

    vector<int> v(k);
    for (auto &x : v)
        cin >> x;

    int cnt = 0, ind = 0;
    int maxi = *max_element(v.begin(), v.end());
    for (int i = 0; i < k; i++)
    {
        if (v[i] == maxi)
        {
            ind = i;
            break;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (i == ind)
            continue;
        if (v[i] != 1)
        {
            cnt += (v[i] + v[i] - 1);
        }
        else
            cnt++;
    }
    cout << cnt << endl;

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