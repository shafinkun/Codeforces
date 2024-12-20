/*___________________In the name of Allah________________*/
/*____________________Solved By shafinkun________________*/
// Problem link : https://codeforces.com/contest/2036/problem/B
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
    int n, k;
    cin >> n >> k;

    deque<int> v(k + 1, 0);
    for (int i = 1; i <= k; i++)
    {
        int b, c;
        cin >> b >> c;
        v[b] += c;
    }
    sort(v.begin(), v.end(), greater<int>());

    int cnt = 0, num = min(n, k);
    while(num--)
    {
        cnt += v.front();
        v.pop_front();
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