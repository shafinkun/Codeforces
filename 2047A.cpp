/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/problemset/problem/2047/A
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

vector<int> v;
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int sum = 0, cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += v[i];

        for (int j = 1; j <= sum; j += 2)
        {
            if (sum == j * j)
                cnt++;
        }
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