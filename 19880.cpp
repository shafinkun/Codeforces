/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/1988/problem/0

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
    k--;

    vector<int> v;
    v.push_back(n);

    int cnt = 0;
    while (v.size() < n)
    {
        int a = v.back();
        a--;
        v.erase(v.begin() + v.size() - 1);

        for (int i = 0; i < min(k, a); i++)
        {
            v.push_back(1);
        }
        v.push_back(a - k + 1);
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